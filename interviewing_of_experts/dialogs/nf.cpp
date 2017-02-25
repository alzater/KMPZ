#include "nf.h"
#include "ui_nf.h"

nf::nf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nf)
{
    ui->setupUi(this);
    n2 = new nf2();
}

nf::~nf()
{
    delete ui;
}

void nf::on_pushButton_3_clicked()
{
    n2->show();
    this->close();
}
