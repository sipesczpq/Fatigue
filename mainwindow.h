#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<QLineEdit>
#include<QToolBar>
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QStatusBar>
#include<QScrollArea>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QWidget>
#include "mcentralwidget.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void createAction();
    void createMenus();
    void createToolBars();
    void createStatusBar();
private:
   QMenu *FileMenu;
   QMenu *EditMenu;
   QMenu *HelpMenu;
  McentralWidget *mcentralWidget;
   QToolBar *MainToolBar;
   QAction *OpenFileAction;
   QAction *EditAction;
   QAction *HelpAction;

};

#endif // MAINWINDOW_H
