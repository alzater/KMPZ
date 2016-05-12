#include "temp.h"
#include "ui_temp.h"

temp::temp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp)
{
    ui->setupUi(this);
     QPushButton *but_1 = new QPushButton(this);
    connect(but_1, &QPushButton::clicked, this, &temp::on_pushButton_clicked);
    n4= new nf4();
}

temp::~temp()
{
    delete ui;
}

void temp::on_pushButton_clicked()
{
    emit closed();
    this->close();
}

void temp::on_pushButton_4_clicked()
{
   n4->show();
}
