#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :BaseWindow(":/res/skin/style1/bg.jpg")
{

}

MainWindow::MainWindow(QString image, QWidget *parent)
    :BaseWindow(image)
{

}
