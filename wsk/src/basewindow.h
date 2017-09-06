#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QWidget>
//#include <QPixmap>

class BaseWindow : public QWidget
{
public:
    BaseWindow(QString baseimage = ":/res/skin/style1/bg.jpg",QWidget *parent = 0);
private:
    void paintEvent(QPaintEvent *event);

    QString m_imagepath;
};

#endif // BASEWINDOW_H
