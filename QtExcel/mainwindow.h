#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QAbstractItemModel;
class QCheckBox;
class QComboBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QTreeView;
QT_END_NAMESPACE

class MySortFilterProxyModel;
class FilterWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setSourceModle(QAbstractItemModel *modle);

private slots:
    void textFilterChanged();
    //void dateFilterChanged();

private:
    Ui::MainWindow *ui;
    QGroupBox *proxyGroupBox;
    QTreeView* proxyView;
    QLabel *filterPatternLabel;
    MySortFilterProxyModel* proxyModel;
    FilterWidget* filterWidget;
    QAbstractItemModel *createMailModel(QObject *parent);
};
#endif // MAINWINDOW_H
