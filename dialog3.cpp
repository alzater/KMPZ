#include "dialog3.h"
#include "ui_dialog3.h"

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    d4 = new Dialog4();
    n1 = new nf();
    vr =  new temp();
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    d4->show();
    this->close();
}

void Dialog3::on_pushButton_4_clicked()
{
    n1->show();

}

void Dialog3::on_pushButton_5_clicked()
{
    vr->show();

}

