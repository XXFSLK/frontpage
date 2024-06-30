#ifndef WIDGE1_H
#define WIDGE1_H

#include <QWidget>

namespace Ui {
class widge1;
}

class widge1 : public QWidget
{
    Q_OBJECT

public:
    explicit widge1(QWidget *parent = nullptr);
    ~widge1();

private:
    Ui::widge1 *ui;
};

#endif // WIDGE1_H
