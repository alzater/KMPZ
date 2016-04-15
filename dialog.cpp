#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    d1 = new Dialog1();
    n1 = new nf();
    vr = new temp();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
 d1->show();
 this->close();
}

void Dialog::on_pushButton_3_clicked()
{
    n1->show();
    this->close();
}

void Dialog::on_pushButton_4_clicked()
{
    vr->show();
    this->close();
}
