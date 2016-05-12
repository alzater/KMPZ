#include "dialog6.h"
#include "ui_dialog6.h"

Dialog6::Dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog6)
{
    ui->setupUi(this);
    n1 = new nf();
    vr = new temp();
}

Dialog6::~Dialog6()
{
    delete ui;
}

void Dialog6::on_pushButton_3_clicked()
{
    n1->show();

}

void Dialog6::on_pushButton_4_clicked()
{
    vr->show();

}
