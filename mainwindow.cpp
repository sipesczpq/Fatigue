#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
  setWindowTitle(tr("Fatigue Analyse"));
  mcentralWidget = new McentralWidget(this);
  setCentralWidget(mcentralWidget);
  createAction();
  createMenus();
  //createToolBar();
 // createStatusBar();
 // createPopupMenu();
}

MainWindow::~MainWindow()
{

}
void MainWindow::createAction()
{
    //open file
    OpenFileAction=new QAction(tr("Open"),this);
    EditAction=new QAction(tr("Edit"),this);
    HelpAction=new QAction(tr("Help"),this);
}
void MainWindow::createMenus()
{
  //file menu
    FileMenu = menuBar()->addMenu(tr("File"));
    FileMenu->addAction(OpenFileAction);
    //eidt menu
    EditMenu = menuBar()->addMenu(tr("Eidt"));
    EditMenu->addAction(EditAction);
    //help menu
    HelpMenu =menuBar()->addMenu(tr("Help"));
    HelpMenu->addAction(HelpAction);
}
//void QMainWindow::setCentralWidget(QWidget *widget)
//{
//    QLabel *label_1;
//    label_1 = new QLabel(this);
//    setCentralWidget(label_1);

//}
