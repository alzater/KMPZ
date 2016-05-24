#include "nf4.h"
#include "ui_nf4.h"

NFmainForm::NFmainForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NFmainForm)
{
    ui->setupUi(this);
}

NFmainForm::~NFmainForm()
{
    delete ui;
}

void NFmainForm::on_pushButton_5_clicked()
{
    this->close();
}

void NFmainForm::on_pushButton_6_clicked()
{
    this->close();
}
