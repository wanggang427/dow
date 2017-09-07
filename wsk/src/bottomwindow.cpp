#include <QPixmap>
#include <QPainter>

#include "bottomwindow.h"


BottomWindow::BottomWindow(QString baseimage, QWidget *parent) :
    QWidget(parent),m_imagepath(baseimage)
{
     setWindowFlags(Qt::FramelessWindowHint);
}


void BottomWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    QPixmap background(m_imagepath);
    painter.drawPixmap(rect(),background);
}
