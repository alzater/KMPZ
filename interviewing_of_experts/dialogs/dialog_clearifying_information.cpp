#include "dialog_clearifying_information.h"
#include "ui_dialog_clearifying_information.h"

DialogClarifyingInformation::DialogClarifyingInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogClearifyingInformation)
{
    ui->setupUi(this);
    d3 = new Dialog3();
}

DialogClarifyingInformation::~DialogClarifyingInformation()
{
    delete ui;
}

void DialogClarifyingInformation::on_pushButton_clicked()
{

}

void DialogClarifyingInformation::on_Binput_clicked()
{
    d3->show();
    this->close();
}
