#include <QApplication>
#include <QFile>

#include "topwindow.h"
#include "mainwindow.h"
#include "basewindow.h"
#include <QWidget>
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    /*--------------------------------------*/
    QFile qss(":/res/qss/checkbox.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
    /*--------------------------------------*/
    MainWindow window;
    window.show();
    app.exec();
    return 0;
}
