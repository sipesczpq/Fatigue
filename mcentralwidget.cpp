#include "mcentralwidget.h"
#include <QHBoxLayout>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QtWidgets>
McentralWidget::McentralWidget(QWidget *parent) : QWidget(parent)
{


    //=======================test space========================

    Label_9 = new QLabel(tr(" Label_9"));
    Label_10 = new QLabel(tr(" Label_10"));
    Label_11 = new QLabel(tr(" Label_11"));




    //=======================test space end=======================
    //左上界面部件
    typeLabel_1 = new QLabel(tr("Choose welded joint type"));
    typeLabel_2 = new QLabel(tr("Joint type:"));
//    typeComBox_3 = new QComboBox;
//    typeComBox_3->setEditable(true);
//    typeComBox_3->insertItem(0,"JoinNo1");
//    typeComBox_3->insertItem(1,"JoinNo2");
//    typeComBox_3->insertItem(2,"JoinNo3");
    //左下界面部件
    loadLabel_1 = new QLabel(tr("Load history"));


    //右上界面部件
    showGraphicsView_1 = new QGraphicsView();
    showLabel_1 = new QLabel(tr("Joint Configuration:"));
    //右下界面部件
    listLabel_1 = new QLabel(tr("Operations"));
    listPushButton_1 = new QPushButton(tr("Select Node"));
    listPushButton_2 = new QPushButton(tr("Save data"));
    listTableWidget_1 = new QTableWidget();
    listTableWidget_1->setColumnCount(2);                         //设置列数
    listTableWidget_1->setRowCount(5);
    QStringList QStringList_1;
    QStringList_1<<"Fat.Life"<<"Percentage";
    listTableWidget_1->setHorizontalHeaderLabels(QStringList_1);
    listTableWidget_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //=======================================界面布局文件============================================
    //右上窗口界面
    QGridLayout *rightlayout_1 = new QGridLayout;
    rightlayout_1->addWidget(showLabel_1,0,0);
    rightlayout_1->addWidget(showradioBGBox(),1,0,1,3);
    rightlayout_1->addWidget(showGraphicsView_1,2,0);

    //右下窗口界面
    QGridLayout *rightlayout_2 = new QGridLayout;
    rightlayout_2->addWidget(listLabel_1,0,0,1,1);
    rightlayout_2->addWidget(listPushButton_1,1,0,1,1);
    rightlayout_2->addWidget(listTableWidget_1,2,0,4,4);
    rightlayout_2->addWidget(listPushButton_2,6,0,1,1);
   //左上窗口界面
     QGridLayout *leftlayout_1 = new QGridLayout;
    leftlayout_1->addWidget(typeLabel_1);
    leftlayout_1->addWidget(typeLabel_2);
  //leftlayout_1->addWidget(typeComBox_3,1,1);
   //左下窗口界面
    QGridLayout *leftlayout_2 = new QGridLayout;
    leftlayout_2->addWidget(loadLabel_1,0,0);
    leftlayout_2->addWidget(loadhisthoryGBox(),1,0,1,5);
    //右部垂直布局
    QVBoxLayout *rightlayout = new QVBoxLayout;
    rightlayout->addLayout(rightlayout_1);
    rightlayout->addLayout(rightlayout_2);
    //左部垂直布局
    QVBoxLayout *leftlayout = new QVBoxLayout;
     leftlayout->addLayout(leftlayout_1);
     leftlayout->addLayout(leftlayout_2);
    //整体水平布局
    QHBoxLayout *mainlayout = new QHBoxLayout;
    mainlayout->addLayout(leftlayout);
    mainlayout->addLayout(rightlayout);
    setLayout(mainlayout);

}

QGroupBox *McentralWidget::showradioBGBox()                                          //右上radiobuttonBoxGroup部件
 {
    QGroupBox *showradioBGBox = new QGroupBox(this);
    showradioButton_2 = new QRadioButton(tr("Original"));
    showradioButton_3 = new QRadioButton(tr("Stress"));
    showradioButton_4 = new QRadioButton(tr("FatigueLife"));
    showradioButton_2->setChecked(true);

    QHBoxLayout *showradioButtonlayout = new QHBoxLayout;                             //radiobutton layout
    showradioButtonlayout->addWidget(showradioButton_2);
    showradioButtonlayout->addWidget(showradioButton_3);
    showradioButtonlayout->addWidget(showradioButton_4);
    showradioButtonlayout->addStretch(1);
    showradioBGBox->setLayout(showradioButtonlayout);
     return showradioBGBox;
 }
QGroupBox *McentralWidget::loadhisthoryGBox()                                         //左下load history BoxGroup部件
{
    QGroupBox *loadhisthoryGBox = new QGroupBox(this);
    loadLabel_2 = new QLabel(tr("Type:"));
    loadComBox_3 = new QComboBox(this);
    loadComBox_3->addItem(tr("Constant amplitude"));
    loadComBox_3->addItem(tr("variable amplitude"));
    loadComBox_3->addItem(tr("random amplitude"));
    QGridLayout *loadhistorylayout_1 = new QGridLayout;
    listTableWidget_2 = new QTableWidget();
    listTableWidget_2->setColumnCount(2);                                         //设置列数
    listTableWidget_2->setRowCount(4);
    QStringList QStringList_2;
    QStringList_2<<"MAX"<<"Min";                                                 //列标题设置
    listTableWidget_2->setHorizontalHeaderLabels(QStringList_2);
    QStringList QStringList_3;
    QStringList_3<<"PointA"<<"PointB"<<"PointC"<<"PointD";                        //行标题设置
    listTableWidget_2->setVerticalHeaderLabels(QStringList_3);
    listTableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    loadhistorylayout_1->addWidget(loadLabel_2,0,0);
    loadhistorylayout_1->addWidget(loadComBox_3,0,1);
    loadhistorylayout_1->addWidget(listTableWidget_2,1,0,1,4);
    loadhisthoryGBox->setLayout(loadhistorylayout_1);
    return loadhisthoryGBox;
}
QGroupBox *McentralWidget::jointypeGBox()                                         //左下load history BoxGroup部件
{
    QGroupBox *jointypeGBox = new QGroupBox(this);
    loadLabel_2 = new QLabel(tr("Type:"));
    loadComBox_3 = new QComboBox(this);
    loadComBox_3->addItem(tr("Constant amplitude"));
    loadComBox_3->addItem(tr("variable amplitude"));
    loadComBox_3->addItem(tr("random amplitude"));
    QGridLayout *loadhistorylayout_1 = new QGridLayout;
    listTableWidget_2 = new QTableWidget();
    listTableWidget_2->setColumnCount(2);                                         //设置列数
    listTableWidget_2->setRowCount(4);
    QStringList QStringList_2;
    QStringList_2<<"MAX"<<"Min";                                                 //列标题设置
    listTableWidget_2->setHorizontalHeaderLabels(QStringList_2);
    QStringList QStringList_3;
    QStringList_3<<"PointA"<<"PointB"<<"PointC"<<"PointD";                        //行标题设置
    listTableWidget_2->setVerticalHeaderLabels(QStringList_3);
    listTableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    loadhistorylayout_1->addWidget(loadLabel_2,0,0);
    loadhistorylayout_1->addWidget(loadComBox_3,0,1);
    loadhistorylayout_1->addWidget(listTableWidget_2,1,0,1,4);
    jointypeGBox->setLayout(loadhistorylayout_1);
    return jointypeGBox;
}
