#include <QVBoxLayout>
#include <QDesktopWidget>
#include <QApplication>
#include <QRect>
#include <QDebug>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :BaseWindow(parent)
{
    topwindow = new TopWindow;
    bottomwindow = new BottomWindow;
    layout = new QVBoxLayout;
    layout->addWidget(topwindow);
    layout->addWidget(bottomwindow);
    layout->setMargin(0);
    setLayout(layout);
    setWindowState(Qt::WindowMaximized);
    connect(topwindow,SIGNAL(switch_work(bool)),this,SLOT(switchWork(bool)));
//    QRect rect = QApplication::desktop()->screenGeometry();
//    setGeometry(0,0,rect.width(),rect.height()/30);

}

MainWindow::MainWindow(QString image, QWidget *parent)
    :BaseWindow(parent)
{

}

void MainWindow::switchWork(bool w)
{

    work = !work;
    QRect rect = QApplication::desktop()->screenGeometry();
    if(!work)
    {
        setWindowState(Qt::WindowNoState);
        bottomwindow->hide();
        setGeometry(0,0,rect.width(),rect.height()/30);
        qDebug() << "-------------" << "call self";
    }
    else
    {
        setGeometry(0,0,rect.width(),rect.height());
        bottomwindow->show();
    }
    /*
    QRect rect = QApplication::desktop()->screenGeometry();
    if(bottomwindow->isHidden())
    {
        setWindowState(Qt::WindowMaximized);
        bottomwindow->show();
    }
    else
    {
        bottomwindow->hide();
        setFixedHeight(rect.height()/30);
    //    setWindowState(Qt::WindowMaximized);
    }*/

}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QRect rect = QApplication::desktop()->screenGeometry();
    topwindow->setFixedHeight(rect.height()/30);
}

#include <QHBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QButtonGroup>

mytest::mytest(QWidget *parent)
    :QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    QHBoxLayout *pLayout = new QHBoxLayout();
    QButtonGroup *m_pButtonGroup = new QButtonGroup(this);

    // 设置不互斥
    m_pButtonGroup->setExclusive(false);
    for (int i = 0; i < 3; ++i)
    {
        QCheckBox *pCheckBox = new QCheckBox(this);

        // 设置文本
        pCheckBox->setText(QString::fromLocal8Bit("切换%1").arg(i + 1));

        pLayout->addWidget(pCheckBox);
        m_pButtonGroup->addButton(pCheckBox);
    }
    pLayout->setSpacing(10);
    pLayout->setContentsMargins(10, 10, 10, 10);

    setLayout(pLayout);
    QRect rect = QApplication::desktop()->screenGeometry();
    setGeometry(0,0,rect.width(),rect.height()/30);
}

