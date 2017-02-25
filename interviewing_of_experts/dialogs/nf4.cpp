#include "nf4.h"
#include "ui_nf4.h"

nf4::nf4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nf4)
{
    ui->setupUi(this);
}

nf4::~nf4()
{
    delete ui;
}

void nf4::on_pushButton_5_clicked()
{
    this->close();
}

void nf4::on_pushButton_6_clicked()
{
    this->close();
}
