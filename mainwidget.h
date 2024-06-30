#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "mainwidow.h"//添加头文件
#include"widge2.h"
QT_BEGIN_NAMESPACE
namespace Ui { class mainwidget; }
QT_END_NAMESPACE

class mainwidget : public QWidget
{
    Q_OBJECT

public:
    mainwidget(QWidget *parent = nullptr);
    ~mainwidget();
    widge1 *new_w;//添加指针
    widge2 *new_n;

private slots:
    void on_readbutton_clicked();

    void on_arrangebutton_clicked();

private:
    Ui::mainwidget *ui;
};
#endif // MAINWIDGET_H
