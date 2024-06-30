#include "mainwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//应用程序类
    mainwidget w;
    w.show();
    return a.exec();
}
