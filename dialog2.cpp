#include "dialog2.h"
#include "ui_dialog2.h"
#include "gap.h"

patient_info_form::patient_info_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patient_info_form)
{
    ui->setupUi(this);
    d3 = new conclusion_form();

}

patient_info_form::~patient_info_form()
{
    delete ui;
}

void patient_info_form::on_pushButton_clicked()
{

}

void patient_info_form::on_Binput_clicked()
{
    d3->show();
    d3->que=this->que;
    d3->ans=this->ans;
    for (int i=0; i<10; i++)
    {
        d3->pie[i]=pie[i];
    }
    d3->flag=flag;
    this->close();
}

void patient_info_form::on_Bvisual_clicked()
{
    PIEform *pieFormObj = new PIEform();
    pieFormObj->show();
}
