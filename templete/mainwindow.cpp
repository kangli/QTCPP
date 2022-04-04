#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowTitle(QApplication::translate("toplevel","Top-level widget"));
    QObject::connect(ui->btnClose,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->btnMaximized,SIGNAL(toggle()),this,SLOT(showMaximized()));
    QObject::connect(ui->btnMinimized, SIGNAL(clicked()), this, SLOT(showMinimized()));
    QToolButton* btn=new QToolButton();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        mPoint=event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    //move(event->globalPos()-mPoint);
    move(event->globalPosition().toPoint() - mPoint);

}

void MainWindow::mouseReleaseEvent(QMouseEvent* event)
{

}

