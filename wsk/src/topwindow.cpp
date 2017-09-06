#include "topwindow.h"
#include <QCheckBox>

TopWindow::TopWindow(QWidget *parent) :
    QWidget(parent)
{
    m_switch = new QCheckBox;
    connect(m_switch, SIGNAL(clicked(bool)), this, SIGNAL(switch_work(bool)));
}
