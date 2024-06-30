#include "mainwidget.h"
#include "ui_mainwidget.h"

mainwidget::mainwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainwidget)
{
    ui->setupUi(this);
    connect(ui->closebutton,&QPushButton::clicked,this,&mainwidget::close);//关闭使用标准信号槽


}

mainwidget::~mainwidget()
{
    delete ui;
}


void mainwidget::on_readbutton_clicked()
{
    new_w = new widge1;
    new_w->show();
}

void mainwidget::on_arrangebutton_clicked()
{
    new_n = new widge2;
    new_n->show();

}
