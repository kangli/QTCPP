#include "bluetoothdevice.h"
#include <QRegExp>

bluetoothdevice::bluetoothdevice()
{
    qDebug() << "enter bludedevice constructor....";

     m_deviceDiscoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);
     m_deviceDiscoveryAgent->setLowEnergyDiscoveryTimeout(5000);

     //每次发现新设备时触发
     connect(m_deviceDiscoveryAgent, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered, this ,[]() {
         qDebug() << "find a new bluebooth device";
     });

     //蓝牙设备搜索完成后，筛选出目标设备进行连接，并进行相关信号与槽函数的绑定
     connect(m_deviceDiscoveryAgent,&QBluetoothDeviceDiscoveryAgent::finished, this, &bluetoothdevice::startDiscovery);

     // 开始外围设备搜索
     m_deviceDiscoveryAgent->start();

}

QString bluetoothdevice::getAddress(QBluetoothDeviceInfo device) const
{
    return device.address().toString();
}

void bluetoothdevice::startDiscovery()
{
     device_list = this->m_deviceDiscoveryAgent->discoveredDevices();

         //遍历显示设备详情
         QList<QBluetoothDeviceInfo>::iterator it;
         for(it=device_list.begin(); it != device_list.end(); it++) {

             // 外围蓝牙设备对象
             QBluetoothDeviceInfo tmp_device = *it;
             QString device_name = tmp_device.name();
             //qDebug() <<"device name:::" << device_name;
             //qDebug() << "device address:::" << this->getAddress(tmp_device);

            //打印搜索出来的全部低功耗蓝牙
            if (tmp_device.coreConfigurations() & QBluetoothDeviceInfo::LowEnergyCoreConfiguration) {
                 qDebug() << " low Energy device ....";
                 qDebug() <<"22222device name:::" << device_name;
               }

             //正则匹配目标设备，
             QString pattern_str = "^DISTO.*";  //qt中正则匹配任意个字符，需要使用.*而不是*
             QRegExp rx(pattern_str);
             if(!rx.exactMatch(device_name)) {
                 continue;
             }
             qDebug() <<"device name:::" << device_name;
             qDebug() << "device address:::" << this->getAddress(tmp_device);

             // 创建蓝牙设备控制器对象
             //m_controler = new QLowEnergyController(tmp_device.address(), this);

             m_controler = QLowEnergyController::createCentral(tmp_device, this);

             // 监听目标设备连接成功消息，连接成功后，搜索目标设备等服务列表
             connect(m_controler, &QLowEnergyController::connected, this, [this](){
                 qDebug() << "m_controler connected ......";
                 //必须要在连接建立后 执行开始寻找service的函数
                 //之前调试，就是因为没有在设备连接后主动请求获取服务列表信息，后续监听便没有触发
                 m_controler->discoverServices();
             });

             // 监听发现服务消息，如果服务的uuid 为约定好的要使用服务类型，则进行后续处理
             connect(m_controler,&QLowEnergyController::serviceDiscovered, this, [this](QBluetoothUuid serviceUuid) {
                 QString muuid{"3ab10101-f831-4395-b29d-570977d5bf94"};
                 if(serviceUuid == QBluetoothUuid(muuid)) {  //我们用的服务类型是0xffd0对应的uuid

                     //发现匹配的服务后，使用控制器对象创建服务对象
                     m_service = m_controler->createServiceObject(serviceUuid,this);
                     if(m_service) {

                         // 服务对象创建成功后，坚挺服务状态变化，如果状态变成已发现，则进行后续服务下特征对象获取
                         connect(m_service,&QLowEnergyService::stateChanged, this, [this]() {
                             qDebug() << "service state change" << m_service->state() << ",||||||";

                             //发现服务, 建立characteristic对象实例
                             if(m_service->state() == QLowEnergyService::ServiceDiscovered) {
                                 QLowEnergyCharacteristic hrChar = m_service->characteristic(QBluetoothUuid(quint16(0xfff6)));
                                 if(!hrChar.isValid()) {
                                     qDebug() << "characteristic fff6 error:::";
                                 }
                                 // 设置特征对象可用
                                 //enable the chracteristic notification by write 0x01 to client characteristic configuration
//                                 QLowEnergyDescriptor m_notificationDesc = hrChar.descriptor(QBluetoothUuid::ClientCharacteristicConfiguration);
//                                 if (m_notificationDesc.isValid()) {
//                                     if(hrChar.properties() & QLowEnergyCharacteristic::Notify) {
//                                         qDebug() << "";
//                                     }
//                                     m_service->writeDescriptor(m_notificationDesc, QByteArray::fromHex("0100"));
//                                 }
                             }
                         });

                         // 通过监听特征对象的变化，不断获得鞋垫压力数据。
                         connect(m_service,&QLowEnergyService::characteristicChanged, this,
                                 [this](QLowEnergyCharacteristic c,QByteArray value) {
                                     qDebug() << "characteristicChanged state change::" <<c.uuid()<< ",||||||";
                                     qDebug() << "value length::" << value.length();
                                     qDebug() << "value length::" << value;

                                     QByteArray sub_1 = value.mid(0,2);
                                     QByteArray sub_2 = value.mid(2,2);
                                     QByteArray sub_3 = value.mid(4,2);

                                     bool ok;
                                     // num 1,2,3  分别对应三个压力感应点的压力值
                                     int num_1 =  QString(sub_1.toHex()).toInt(&ok,16);
                                     qDebug() << "num_1:::" << num_1;
                                     int num_2 =  QString(sub_2.toHex()).toInt(&ok,16);
                                     qDebug() << "num_1:::" << num_2;
                                     int num_3 =  QString(sub_3.toHex()).toInt(&ok,16);
                                     qDebug() << "num_1:::" << num_3;

                                 }
                         );

                         // 触发服务详情发现函数 ，不要忘记调用
                         m_service->discoverDetails();
                     }
                 }
             });

             connect(m_controler,&QLowEnergyController::discoveryFinished, this, [this]() {
                 qDebug() << "finish service discovery";
             });

             //连接外围设备
             m_controler->connectToDevice();

             //QTimer *timer = new QTimer(this);
             //connect(timer, &QTimer::timeout, this, [this](){ qDebug() <<"state:::" <<  this->m_controler->state();});
             //timer->start(1000);
         }

}
