#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint|windowFlags());
    this->setWindowTitle(QApplication::translate("toplevel","Top-level widget"));

    QHBoxLayout* title = new QHBoxLayout();
    title->setContentsMargins(0, 0, 0, 0);
    title->setSpacing(0);
    title->addStretch();
    title->addWidget(ui->btnMinimized);
    title->addWidget(ui->btnMaximized);
    title->addWidget(ui->btnClose);

    QWidget* widgetTitle = new QWidget();
    widgetTitle->setLayout(title);

    QVBoxLayout* centeral = new QVBoxLayout();
    centeral->setSpacing(0);
    centeral->setContentsMargins(0, 0, 0, 0);
    centeral->addWidget(widgetTitle);
    centeral->addStretch();


    ui->centralwidget->setLayout(centeral);

    QObject::connect(ui->btnClose,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->btnMaximized,SIGNAL(clicked()),this,SLOT(showMaximized()));
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

