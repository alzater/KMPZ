#include "dialog5.h"
#include "ui_dialog5.h"

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
    d6 = new Dialog6();
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::on_pushButton_clicked()
{

}

void Dialog5::on_pushButton_3_clicked()
{
    this->close();
}

void Dialog5::on_Bno_clicked()
{

}

void Dialog5::on_Byes_clicked()
{
    d6->show();
    this->close();
}
