#include "mcentralwidget.h"
#include <QHBoxLayout>
#include<QGridLayout>
#include<QVBoxLayout>
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
    loadLabel_2 = new QLabel(tr("Type:"));
//   loadComBox_3 = new QComboBox();
//    loadComBox_3->setEditable(true);
//    loadComBox_3->setItemText(0,"constan amplitude");
//    loadComBox_3->setItemText(1,"variable amplitude");
//    loadComBox_3->setItemText(2,"random amplitude");
    //右上界面部件

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
//    rightlayout_1->addWidget(showradioButton_2,1,0);
//    rightlayout_1->addWidget(showradioButton_3,1,1);
//    rightlayout_1->addWidget(showradioButton_4,1,2);
    //右下窗口界面
    QGridLayout *rightlayout_2 = new QGridLayout;
    rightlayout_2->addWidget(listLabel_1,0,0,1,1);
    rightlayout_2->addWidget(listPushButton_1,1,0,1,1);
    rightlayout_2->addWidget(listTableWidget_1,2,0,4,4);
    rightlayout_2->addWidget(listPushButton_2,6,0,1,1);
//    //左上窗口界面
     QGridLayout *leftlayout_1 = new QGridLayout;
    leftlayout_1->addWidget(typeLabel_1);
    leftlayout_1->addWidget(typeLabel_2);
//    //leftlayout_1->addWidget(typeComBox_3,1,1);
//    //左下窗口界面
    QGridLayout *leftlayout_2 = new QGridLayout;
    leftlayout_2->addWidget(loadLabel_1,0,0);
    leftlayout_2->addWidget(loadLabel_2,1,0);
//    //leftlayout_2->addWidget(loadComBox_3,1,1);
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

QGroupBox *McentralWidget::showradioBGBox()
 {
    QHBoxLayout *showradioButtonlayout = new QHBoxLayout;                                 //radiobutton layout
    showradioButton_2 = new QRadioButton(tr("Original"));
    showradioButton_3 = new QRadioButton(tr("Stress"));
    showradioButton_4 = new QRadioButton(tr("FatigueLife"));
    QGroupBox *showradioBGBox = new QGroupBox(this);
    showradioButton_2->setChecked(true);
    showradioBGBox->setExclusive(true);                                                   //设置互斥
    showradioButtonlayout->addWidget(showradioButton_2);
    showradioButtonlayout->addWidget(showradioButton_3);
    showradioButtonlayout->addWidget(showradioButton_4);
    showradioButtonlayout->addStretch(1);
    showradioBGBox->setLayout(showradioButtonlayout);

     return showradioBGBox;
 }
