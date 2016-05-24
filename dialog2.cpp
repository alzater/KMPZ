#include "dialog2.h"
#include "ui_dialog2.h"

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
    this->close();
}
