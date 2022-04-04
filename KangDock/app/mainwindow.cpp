#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QLabel>

using namespace ads;

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	CDockManager::setConfigFlag(CDockManager::DefaultOpaqueConfig, false);
	mDockManager = new ads::CDockManager(this);

	QLabel* l = new QLabel();
	l->setWordWrap(true);
	l->setText("This is a test");
	QLabel* m=new QLabel();
	m->setWordWrap(true);
	m->setText("test 2");


	ads::CDockWidget* dockwidget = new ads::CDockWidget("kang dock");
	dockwidget->setWidget(l);
	ui->menubar->addAction(dockwidget->toggleViewAction());
	ads::CDockWidget* dockwidget2 = new ads::CDockWidget("docke 2");
	dockwidget2->setWidget(m);
	ui->menubar->addAction(dockwidget2->toggleViewAction());

	mDockManager->addDockWidget(ads::TopDockWidgetArea,dockwidget);
	mDockManager->addDockWidget(ads::RightDockWidgetArea, dockwidget2);
}

MainWindow::~MainWindow()
{
	delete ui;
}

