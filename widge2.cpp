#include "widge2.h"
#include "ui_widge2.h"

widge2::widge2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widge2)
{
    ui->setupUi(this);
}

widge2::~widge2()
{
    delete ui;
}
