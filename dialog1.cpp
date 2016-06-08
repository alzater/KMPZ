#include "dialog1.h"
#include "ui_dialog1.h"
#include "dialog.h"
#include "gap.h"

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
    answer_question_form *d = new answer_question_form();
    d->show();
    for (int i=0; i<10; i++)
    {
        d->pie[i]=pie[i];
    }
    d->flag=flag;
    this->close();
}

void definition_ability_conclusion_form::on_Byes_clicked()
{
    d2->show();
    d2->que=ui->question->text().toStdString();
    d2->ans=ui->answer->text().toStdString();
    for (int i=0; i<10; i++)
    {
        d2->pie[i]=pie[i];
    }
    d2->flag=flag;
    this->close();
}

void definition_ability_conclusion_form::setQuestionAndAnswer(const QString & que, const QString & ans )
{
    ui->answer->setText(ans);
    ui->question->setText(que);
}

void definition_ability_conclusion_form::on_Bvisual_clicked()
{
    PIEform *pieFormObj = new PIEform();
    pieFormObj->show();
}
