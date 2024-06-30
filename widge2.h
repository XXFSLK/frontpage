#ifndef WIDGE2_H
#define WIDGE2_H

#include <QWidget>

namespace Ui {
class widge2;
}

class widge2 : public QWidget
{
    Q_OBJECT

public:
    explicit widge2(QWidget *parent = nullptr);
    ~widge2();

private:
    Ui::widge2 *ui;
};

#endif // WIDGE2_H
