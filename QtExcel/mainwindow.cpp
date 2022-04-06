#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mysortfilterproxymodel.h"
#include "filterwidget.h"

//#include <QAxObject>
#include <QDebug>
#include <QDir>
#include <QVBoxLayout>
#include <QTreeView>
#include <QStandardItemModel>
#include <QLabel>
#include <QGroupBox>
#include <string>
#include <QProcess>
#include <QStandardPaths>
#include <QtCore/QJniObject>
#include <QResource>

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    proxyModel = new MySortFilterProxyModel(this);

    filterWidget=new FilterWidget;
    filterWidget->setText(tr("2"));
    connect(filterWidget,&FilterWidget::filterChanged,this,&MainWindow::textFilterChanged);
    filterPatternLabel =new QLabel(tr("&Filter pattern:"));
    filterPatternLabel->setBuddy(filterWidget);
    connect(filterWidget, &QLineEdit::textChanged,this, &MainWindow::textFilterChanged);

    proxyView=new QTreeView;
    proxyView->setRootIsDecorated(false);
    proxyView->setAlternatingRowColors(true);
    proxyView->setModel(proxyModel);
    proxyView->setSortingEnabled(true);
    proxyView->sortByColumn(1,Qt::AscendingOrder);

    QGridLayout* proxyLayout =new QGridLayout;
    proxyLayout->addWidget(proxyView,0,0,1,3);
    proxyLayout->addWidget(filterPatternLabel, 1, 0);
    proxyLayout->addWidget(filterWidget, 1, 1);

    proxyGroupBox = new QGroupBox(tr("中泰设备"));
    proxyGroupBox->setLayout(proxyLayout);


    QVBoxLayout *mainLayout=new QVBoxLayout;
    mainLayout->addWidget(proxyGroupBox);
    ui->centralwidget->setLayout(mainLayout);

    setWindowTitle(tr("ZhongTai Model"));
    resize(500,450);
    opexcel();
    setSourceModle(createMailModel(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setSourceModle(QAbstractItemModel *modle)
{
  proxyModel->setSourceModel(modle);
  for (int i = 0; i < proxyModel->columnCount(); ++i)
      proxyView->resizeColumnToContents(i);
}

void MainWindow::textFilterChanged()
{
    FilterWidget::PatternSyntax s = filterWidget->patternSyntax();
    QString pattern = filterWidget->text();
    switch (s) {
    case FilterWidget::Wildcard:
        pattern = QRegularExpression::wildcardToRegularExpression(pattern);
        break;
    case FilterWidget::FixedString:
        pattern = QRegularExpression::escape(pattern);
        break;
    default:
        break;
    }

    QRegularExpression::PatternOptions options = QRegularExpression::NoPatternOption;
    if (filterWidget->caseSensitivity() == Qt::CaseInsensitive)
        options |= QRegularExpression::CaseInsensitiveOption;
    QRegularExpression regularExpression(pattern, options);
    proxyModel->setFilterRegularExpression(regularExpression);
}

QAbstractItemModel *MainWindow::createMailModel(QObject *parent)
{
    QStandardItemModel *model = new QStandardItemModel(parent);

//    QString path="/sdcard/Download/";
//    QString filename= path + "shebei.xlsx";
//    QFile file(filename);
//    if(!file.exists()){
//        return nullptr;
//        qDebug()<< "file is not exists!"<<Qt::endl;
//    }
    bool result;
    QDir dir("/storage/emulated/0/Download/");
    //QDir dir("D:/VistualStudioLearn/QTCPP/QtExcel/");
    QString filename=dir.path()+"/zhongtai/text4.xlsx";
    qDebug() << "[Kang] MyDir 路径"<<filename;
    Document xlsxR("/storage/emulated/0/Download/zhongtai/text6.xlsx");
    if ( xlsxR.load() ) // load excel file
    {
        qDebug() << "[debug] success to load xlsx file.";

//        int row = 1; int col = 1;
//        Cell* cell = xlsxR.cellAt(row, col); // get cell pointer.
//        if ( cell != NULL )
//        {
//            QVariant var = cell->readValue(); // read cell value (number(double), QDateTime, QString ...)
//            qDebug() << "[debug] cell(1,1) is " << var; // Display value. It is 'Hello Qt!'.
//        }
//        else
//        {
//            qDebug() << "[debug][error] cell(1,1) is not set.";
//        }
        int rowCount = 17;
        int columnCount = 8;
        model->setRowCount(0);
        model->setColumnCount(columnCount);
        int startRow=3;
        for (int row=startRow; row <= rowCount; row++)
        {
            //QVariantList dataRow;
            if (row > startRow){
                model->insertRow(0);
            }
            for (int column=1; column <= columnCount; column++)
            {

                Cell* cell = xlsxR.cellAt(row, column); // get cell pointer.
                if ( cell != NULL )
                {
                    QVariant var = cell->readValue(); // read cell value (number(double), QDateTime, QString ...)
                    qDebug() << "[debug] cell(1,1) is " << var; // Display value. It is 'Hello Qt!'.
                    if (row == startRow){
                        model->setHeaderData(column-1, Qt::Horizontal, var);
                    }
                    else{
                        model->setData(model->index(0,column-1),var);
                    }
                    qDebug()<<var;
                }
            }

            //data.append(dataRow);
        }
    }
    else
    {
        qDebug() << "[debug][error] failed to load xlsx file.";
    }

//    QXlsx::Document xlsxW;
//    xlsxW.write("A1", "Hello Kang!");
//    xlsxW.saveAs("/sdcard/Download/Test.xlsx");
    return model;
}


void MainWindow::opexcel()
{
/*
    QJniObject mediaDir = QJniObject::callStaticObjectMethod("android/os/Environment", "getExternalStorageDirectory", "()Ljava/io/File;");
    QJniObject mediaPath = mediaDir.callObjectMethod( "getAbsolutePath", "()Ljava/lang/String;" );
    //QJniObject activity = QJniObject::callStaticObjectMethod("org/qtproject/qt6/android/QtNative", "activity", "()Landroid/app/Activity;");
    //QJniObject package = activity.callObjectMethod("getPackageName", "()Ljava/lang/String;");

    //QString dataAbsPath = mediaPath.toString()+"/Android/obb/"+package.toString()+"/yourExpansionFileName.obb";
    QString dataAbsPath = mediaPath.toString()+"/Download/";
    QJniEnvironment env; // Don't know what this is for ?
    if (env->ExceptionCheck()) { env->ExceptionClear(); } // Or this...?

    bool loadResource = QResource::registerResource(dataAbsPath);
*/

//    QStringList systemEnvironment = QProcess::systemEnvironment();

//    QString s = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
//    qDebug() << "[Kang] QStandardPaths 路径"<<s;
//    QDir MyDir;
//    s = s + "/zhongtai/";
//    MyDir.mkdir(s);

    bool result;
    QDir dir("/storage/emulated/0/Download/");
    qDebug() << "---------------------------"<<Qt::endl;
    qDebug() << dir;
    result = dir.mkdir("zhongtai");
    qDebug() << "mkdir(\"zhongtai\") success: " << result;
//    QFile m_file(dir.path() + "/zhongtai/cache.txt");
//    result = m_file.open(QFile::WriteOnly);
//    qDebug() << "open() success: " << result;
//    m_file.close();
//    result = m_file.rename(dir.path() + "/zhongtai/cache.zip");



    // [1]  Writing excel file(*.xlsx)
    QXlsx::Document xlsxW;
    //QDir dir;
    //bool ok = dir.mkpath("file:///storage/emulated/0/Download/zhongtai/");
    //QUrl url("file:///storage/emulated/0/Download/");
    //QUrl url("D:/VistualStudioLearn/QTCPP/QtExcel/");
    //QUrl url("/storage/emulated/0/zhongtai/");
    QString filename=dir.path()+"/zhongtai/text6.xlsx";
    qDebug() << "[Kang] MyDir 路径"<<filename;

//    if(filename.isEmpty())
//    {
//        qDebug() << "[Kang] 文件夹不存在,未建立";
//        file->mkpath(path);
//    }
//    else{
//        qDebug() << "[Kang] 文件夹存在";
//        qDebug() << "[Kang] 文件名字"<< filename;
//    }

//    xlsxW.write("A1", "Hello Kang!"); // write "Hello Qt!" to cell(A,1). it's shared string.
//    if ( xlsxW.saveAs(filename) ) // save the document as 'Test.xlsx'
//    {
//        qDebug() << "[debug] success to write xlsx file";
//    }
//    else
//    {
//        qDebug() << "[debug][error] failed to write xlsx file";
//    }

    //qDebug() << "[debug] current directory is " << QDir::currentPath();


    // [2] Reading excel file(*.xlsx)
    Document xlsxR(filename);
    if ( xlsxR.load() ) // load excel file
    {
        qDebug() << "[debug] success to load xlsx file.";

        int row = 1; int col = 1;
        Cell* cell = xlsxR.cellAt(row, col); // get cell pointer.
        if ( cell != NULL )
        {
            QVariant var = cell->readValue(); // read cell value (number(double), QDateTime, QString ...)
            qDebug() << "[debug] cell(1,1) is " << var; // Display value. It is 'Hello Qt!'.
        }
        else
        {
            qDebug() << "[debug][error] cell(1,1) is not set.";
        }
    }
    else
    {
        qDebug() << "[debug][error] failed to load xlsx file.";
    }
}

bool MainWindow::requestPermission()
{
//    QtAndroid::PermissionResult r = QtAndroid::checkPermission("android.permission.WRITE_EXTERNAL_STORAGE");
//        if(r == QtAndroid::PermissionResult::Denied) {
//            QtAndroid::requestPermissionsSync(QStringList()<<"android.permission.WRITE_EXTERNAL_STORAGE");
//            r = QtAndroid::checkPermission("android.permission.CAMERA");
//            if(r == QtAndroid::PermissionResult::Denied) {
//                 return false;
//            }
//       }
       return true;
}

/*
QAbstractItemModel *MainWindow::createMailModel(QObject *parent)
{
    QStandardItemModel *model = new QStandardItemModel(parent);

    QString path="D:/VistualStudioLearn/QTCPP/QtExcel/";
    QString filename= path + "shebei.xlsx";
    QFile file(filename);
    if(!file.exists()){
        return nullptr;
        qDebug()<< "file is not exists!"<<Qt::endl;
    }
    QAxObject* excel = new QAxObject( "Excel.Application", 0 );
    QAxObject* workbooks = excel->querySubObject( "Workbooks" );
    QAxObject* workbook = workbooks->querySubObject( "Open(const QString&)", filename);
    QAxObject* sheets = workbook->querySubObject( "Worksheets" );
    int startRow=3;
    //QList<QVariantList> data;

       int count = sheets->dynamicCall("Count()").toInt();

       count = sheets->property("Count").toInt();
       for (int i=1; i<=count; i++)
        {
           QAxObject* sheet = sheets->querySubObject( "Item( int )", i );
           QAxObject* usedrange=sheet->querySubObject("UsedRange");
           if(NULL == usedrange || usedrange->isNull()){
               return  nullptr;
           }
           QAxObject* rows = usedrange->querySubObject( "Rows" );
           int rowCount = rows->dynamicCall( "Count()" ).toInt();
           QAxObject* columns = usedrange->querySubObject( "Columns" );
           int columnCount = columns->property("Count").toInt();
           model->setRowCount(0);
           model->setColumnCount(columnCount);

           for (int row=startRow; row <= rowCount; row++)
           {
               //QVariantList dataRow;
               if (row > startRow){
                   model->insertRow(0);
               }
               for (int column=1; column <= columnCount; column++)
               {
                   QAxObject *cells = sheet->querySubObject("Cells(int,int)", row, column);
                   QVariant var = cells->dynamicCall("Value");

                   if (row == startRow){
                       model->setHeaderData(column-1, Qt::Horizontal, var);
                   }
                   else{
                       model->setData(model->index(0,column-1),var);
                   }
                   qDebug()<<var;
               }

               //data.append(dataRow);
           }
       }

       workbook->dynamicCall("Close()");
       excel->dynamicCall("Quit()");

    return model;
}

*/
