#ifndef MCENTRALWIDGET_H
#define MCENTRALWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QTextEdit>
#include <QRadioButton>
#include <QGroupBox>
#include <QPushButton>
#include <QTableWidget>
class McentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit McentralWidget(QWidget *parent = 0);
    QGroupBox showradioBGBox();
private:
     QLabel *typeLabel_1,*typeLabel_2,*listLabel_1,*listLabel_2,*loadLabel_1,*loadLabel_2,*showLabel_1,*showLabel_2,*Label_9,*Label_10,*Label_11,*label_12,*label_13;
     QComboBox *typeComBox_3,*loadComBox_3;
     QRadioButton *showradioButton_2,*showradioButton_3,*showradioButton_4;
     //QGroupBox *showradioBGBox;
     QPushButton *listPushButton_1,*listPushButton_2;
     QTableWidget *listTableWidget_1;

signals:

public slots:
};

#endif // MCENTRALWIDGET_H
