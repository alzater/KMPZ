#include "dialog.h"
#include "ui_dialog.h"

answer_question_form::answer_question_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::answer_question_form)
{
    ui->setupUi(this);
    d1 = new definition_ability_conclusion_form();
    n1 = new NFquantitativeAnswerForm();
    vr = new temp();
}

answer_question_form::~answer_question_form()
{
    delete ui;
}

void answer_question_form::on_pushButton_clicked()
{

}

void answer_question_form::on_pushButton_3_clicked()
{


}

void answer_question_form::on_pushButton_4_clicked()
{

}

void answer_question_form::on_pushButton_2_clicked()
{

}

void answer_question_form::on_Binstruments_clicked()
{
    n1->show();
}

void answer_question_form::on_BtempInfo_clicked()
{
    vr->init( ui->question->text().toStdString(), ui->answer->text().toStdString() );
    vr->show();
}

void answer_question_form::on_Bdalee_clicked()
{
    d1->show();
    d1->setQuestionAndAnswer(ui->question->text(), ui->answer->text());
    this->close();
}

void answer_question_form::on_Bvisual_clicked()
{
    QString m = ui->question->text();
    ui->label_2->setText(m);
}
