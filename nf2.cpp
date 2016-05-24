#include "nf2.h"
#include "ui_nf2.h"

NFerrorForm::NFerrorForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NFerrorForm)
{
    ui->setupUi(this);
    n3 = new NFconfidenceForm();
}

NFerrorForm::~NFerrorForm()
{
    delete ui;
}

void NFerrorForm::on_pushButton_6_clicked()
{
    n3->show();
    this->close();
}
