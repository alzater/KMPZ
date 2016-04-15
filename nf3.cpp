#include "nf3.h"
#include "ui_nf3.h"

nf3::nf3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nf3)
{
    ui->setupUi(this);
    n4 = new nf4();
}

nf3::~nf3()
{
    delete ui;
}

void nf3::on_pushButton_6_clicked()
{
    n4->show();
    this->close();
}
