#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
//#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QComboBox;
class QLabel;
class QSpintBox;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLabel *shapelabel;
    QComboBox *shapecombo;
    QSpintBox *shapesspinbox;
};
#endif // MAINWINDOW_H
