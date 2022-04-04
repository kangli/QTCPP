#include <QCoreApplication>
#include "bluetoothdevice.h"
#include "finddevice.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    finddevice* b=new finddevice();
    return a.exec();
    // int a=7;
    // int b=8;

    // [a,b](){
    //     std::cout << "/* message */" <<a << " "<< b<< std::endl;
    // }();
}
