#ifndef BLUETOOTHDEVICE_H
#define BLUETOOTHDEVICE_H

#include <QObject>
#include<QtBluetooth/QBluetoothDeviceDiscoveryAgent>
#include<QtBluetooth/QBluetoothDeviceInfo>
#include<QtBluetooth/QBluetoothUuid>
#include<QtBluetooth/QBluetoothServiceInfo>
#include<QtBluetooth/QLowEnergyController>
#include<QtBluetooth/QLowEnergyService>
#include<QtBluetooth/QLowEnergyDescriptor>
#include<QDebug>

class bluetoothdevice:public QObject
{
    Q_OBJECT
public:
    bluetoothdevice();
    QString getAddress(QBluetoothDeviceInfo device) const;
public slots:
    void startDiscovery();
private:
        QList<QBluetoothDeviceInfo> device_list;  //存放搜索到到蓝牙设备列表
        QBluetoothDeviceDiscoveryAgent *m_deviceDiscoveryAgent;  //设备搜索对象
        QLowEnergyController *m_controler;   //单个蓝牙设备控制器
        QLowEnergyService *m_service; //服务对象实例
};

#endif // BLUETOOTHDEVICE_H
