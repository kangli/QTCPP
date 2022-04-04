#ifndef FINDDEVICE_H
#define FINDDEVICE_H

#include <QObject>
#include<QtBluetooth/QBluetoothDeviceDiscoveryAgent>
#include<QBluetoothDeviceInfo>


class finddevice : public QObject
{
    Q_OBJECT
public:
    explicit finddevice(QObject *parent = nullptr);
    void startDeviceDiscovery();
public slots:
    void deviceDiscovered(const QBluetoothDeviceInfo&);
signals:

};

#endif // FINDDEVICE_H
