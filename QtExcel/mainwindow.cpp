#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mysortfilterproxymodel.h"
#include "filterwidget.h"

#include <QAxObject>
#include <QDebug>
#include <QDir>
#include <QVBoxLayout>
#include <QTreeView>
#include <QStandardItemModel>
#include <QLabel>
#include <QGroupBox>

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

