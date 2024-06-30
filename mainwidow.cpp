#include "widge1.h"
#include "ui_widge1.h"

widge1::widge1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widge1)
{
    ui->setupUi(this);
}

widge1::~widge1()
{
    delete ui;
}
