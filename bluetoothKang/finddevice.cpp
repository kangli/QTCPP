#include "finddevice.h"

finddevice::finddevice(QObject *parent)
    : QObject{parent}
{
    this->startDeviceDiscovery();
};

void finddevice::startDeviceDiscovery()
{
    QBluetoothDeviceDiscoveryAgent *discoveryAgent =new QBluetoothDeviceDiscoveryAgent(this);
    connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),
               this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    discoveryAgent->start();


}

void finddevice::deviceDiscovered(const QBluetoothDeviceInfo &device)
{
     qDebug() << "Found new device:" << device.name() << '(' << device.address().toString() << ')';
}
