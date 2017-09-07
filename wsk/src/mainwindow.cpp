#include <QVBoxLayout>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :BaseWindow(parent)
{
    topwindow = new TopWindow;
    bottomwindow = new BottomWindow;
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(topwindow,1);
    layout->addWidget(bottomwindow,29);
    setLayout(layout);

}

MainWindow::MainWindow(QString image, QWidget *parent)
    :BaseWindow(parent)
{

}

#include <QHBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QButtonGroup>

mytest::mytest(QWidget *parent)
    :QWidget(parent)
{
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
}
