#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    shapecombo=new QComboBox();
    shapecombo->addItem("re");
    shapelabel = new QLabel("&Sharpe:");
    //shapelabel->setBuddy(shapecombo);
    //shapelabel->setAlignment(Qt::AlignLeft | Qt::AlignBottom);

    QHBoxLayout* h_box_layout = new QHBoxLayout(this);
    h_box_layout->setAlignment(Qt::AlignLeft | Qt::AlignBottom);
    QPushButton* a = new QPushButton("btn1");
    QPushButton* b = new QPushButton("btn2");

    h_box_layout->addWidget(shapelabel);
    h_box_layout->addWidget(shapecombo);
    h_box_layout->addWidget(a);
    h_box_layout->addWidget(b);
    ui->centralwidget->setLayout(h_box_layout);

//    ui->gridLayout->addWidget(shapelabel,0,0,Qt::AlignRight);
//    ui->gridLayout->addWidget(shapecombo, 0, 1);

    //QGridLayout* mainLayout = new QGridLayout(this);
    ////! [9] //! [10]
    //mainLayout->setColumnStretch(0, 1);
    ////mainLayout->setColumnStretch(3, 1);

    //mainLayout->addWidget(shapelabel, 0, 0, Qt::AlignLeft | Qt::AlignBottom);
    //mainLayout->addWidget(shapecombo, 0, 1);
    //ui->centralwidget->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

