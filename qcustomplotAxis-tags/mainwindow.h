#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "axistag.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void timerSlot();

private:
    Ui::MainWindow *ui;
    QCustomPlot* mPlot;
    QPointer<QCPGraph> mGraph1;
    QPointer<QCPGraph> mGraph2;
    AxisTag* mTag1;
    AxisTag* mTag2;
    QTimer mDataTimer;
    
};
#endif // MAINWINDOW_H
