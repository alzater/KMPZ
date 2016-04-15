#include "nf2.h"
#include "ui_nf2.h"

nf2::nf2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nf2)
{
    ui->setupUi(this);
    n3 = new nf3();
}

nf2::~nf2()
{
    delete ui;
}

void nf2::on_pushButton_6_clicked()
{
    n3->show();
    this->close();
}
