#ifndef TOPWINDOW_H
#define TOPWINDOW_H

#include <QWidget>
//#include <QCheckBox>
class QPushButton;
class QCheckBox;
class TopWindow : public QWidget
{
    Q_OBJECT
public:
    explicit TopWindow(QWidget *parent = 0);

signals:
    void switch_work(bool);
public slots:
private:
    QCheckBox *m_switch;

};

#endif // TOPWINDOW_H
