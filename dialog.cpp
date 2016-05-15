#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    d1 = new Dialog1();
    n1 = new nf();
    vr = new temp();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

}

void Dialog::on_pushButton_3_clicked()
{


}

void Dialog::on_pushButton_4_clicked()
{

}

void Dialog::on_pushButton_2_clicked()
{

}

void Dialog::on_Binstruments_clicked()
{
    n1->show();
}

void Dialog::on_BtempInfo_clicked()
{
    vr->init( ui->question->text().toStdString(), ui->answer->text().toStdString() );
    vr->show();
}

void Dialog::on_Bdalee_clicked()
{
    d1->show();
    this->close();
}

void Dialog::on_Bvisual_clicked()
{
    QString m = ui->question->text();
    ui->label_2->setText(m);
}
