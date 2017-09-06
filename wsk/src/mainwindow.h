#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "basewindow.h"

class MainWindow : public BaseWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    explicit MainWindow(QString image,QWidget *parent = 0);

signals:

public slots:

private:
    QString m_baseimage;
};

#endif // MAINWINDOW_H
