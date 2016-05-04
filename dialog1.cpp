#include "dialog1.h"
#include "ui_dialog1.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    d2 = new Dialog2();
   // connect (temp::on_pushButton_clicked(), SIGNAL(closed()), this, SLOT(openform()));
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{
    d2->show();
    this->close();
}

void Dialog1::openform()
{
    this->show();
}

