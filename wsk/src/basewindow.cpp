#include "basewindow.h"
#include <QPixmap>
#include <QPainter>


BaseWindow::BaseWindow( QWidget *parent)
    :QWidget(parent)
{
    // 窗口最大化
    setWindowState(Qt::WindowMaximized);
    // 设置无边框以及窗口最底部并且无任务栏图标
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnBottomHint | Qt::Tool );
    // 背景透明
    //setAttribute(Qt::WA_TranslucentBackground, true);
}
