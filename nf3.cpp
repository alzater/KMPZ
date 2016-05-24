#include "nf3.h"
#include "ui_nf3.h"

NFconfidenceForm::NFconfidenceForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NFconfidenceForm)
{
    ui->setupUi(this);
//    n4 = new nf4();
}

NFconfidenceForm::~NFconfidenceForm()
{
    delete ui;
}

void NFconfidenceForm::on_pushButton_6_clicked()
{
//    n4->show();
    this->close();
}
