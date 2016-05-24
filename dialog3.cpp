#include "dialog3.h"
#include "ui_dialog3.h"

conclusion_form::conclusion_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conclusion_form)
{
    ui->setupUi(this);
    d4 = new another_conclusion_form();
    n1 = new NFquantitativeAnswerForm();
    vr =  new temp();
}

conclusion_form::~conclusion_form()
{
    delete ui;
}

void conclusion_form::on_pushButton_clicked()
{
    d4->show();
    this->close();
}

void conclusion_form::on_pushButton_4_clicked()
{}


void conclusion_form::on_pushButton_5_clicked()
{


}


void conclusion_form::on_Binstruments_clicked()
{
    n1->show();
}

void conclusion_form::on_BtempInfo_clicked()
{
     vr->show();
}
