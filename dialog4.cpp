#include "dialog4.h"
#include "ui_dialog4.h"

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    d5 = new Dialog5();
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_3_clicked()
{
    d5->show();
    this->close();
}
