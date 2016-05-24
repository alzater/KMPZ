#include "dialog1.h"
#include "ui_dialog1.h"

definition_ability_conclusion_form :: definition_ability_conclusion_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::definition_ability_conclusion_form)
{
    ui->setupUi(this);
    d2 = new patient_info_form();
   // connect (temp::on_pushButton_clicked(), SIGNAL(closed()), this, SLOT(openform()));
}

definition_ability_conclusion_form::~definition_ability_conclusion_form()
{
    delete ui;
}

void definition_ability_conclusion_form::on_pushButton_clicked()
{

}

void definition_ability_conclusion_form::openform()
{
    this->show();
}


void definition_ability_conclusion_form::on_Bno_clicked()
{

}

void definition_ability_conclusion_form::on_Byes_clicked()
{
    d2->show();
    this->close();
}
