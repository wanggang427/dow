#ifndef BOTTOMWINDOW_H
#define BOTTOMWINDOW_H

#include <QWidget>

class BottomWindow : public QWidget
{
    Q_OBJECT
public:
    explicit BottomWindow(QString baseimage = ":/res/skin/style1/bg.jpg",QWidget *parent = 0);

signals:

public slots:
private:
    void paintEvent(QPaintEvent *event);

    QString m_imagepath;

};

#endif // BOTTOMWINDOW_H
