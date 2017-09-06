#include "basewindow.h"
#include <QPixmap>
#include <QPainter>


BaseWindow::BaseWindow(QString baseimage, QWidget *parent)
    :QWidget(parent),m_imagepath(baseimage)
{
    // 窗口最大化
    setWindowState(Qt::WindowMaximized);
    // 设置无边框以及窗口最底部并且无任务栏图标
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnBottomHint | Qt::Tool );
    // 背景透明
    setAttribute(Qt::WA_TranslucentBackground, true);
}

void BaseWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    QPixmap background(m_imagepath);
    painter.drawPixmap(rect(),background);
}
