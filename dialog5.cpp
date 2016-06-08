#include "dialog5.h"
#include "ui_dialog5.h"
#include "gap.h"

another_answerFORtheQUESTION_form::another_answerFORtheQUESTION_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::another_answerFORtheQUESTION_form)
{
    ui->setupUi(this);
    d6 = new another_answerFORtheQUESTION_form2();
}

another_answerFORtheQUESTION_form::~another_answerFORtheQUESTION_form()
{
    delete ui;
}

void another_answerFORtheQUESTION_form::on_pushButton_clicked()
{

}

void another_answerFORtheQUESTION_form::on_pushButton_3_clicked()
{
    this->close();
}

void another_answerFORtheQUESTION_form::on_Bno_clicked()
{
    this->close();
}

void another_answerFORtheQUESTION_form::on_Byes_clicked()
{
    d6->show();
    this->close();
}

void another_answerFORtheQUESTION_form::setQuestionAndAnswer(const QString &que, const QString &ans)
{
    ui->question->setText(que);
    ui->comboBox_answers->addItem(ans);
}

void another_answerFORtheQUESTION_form::on_Bvisual_clicked()
{
    PIEform *pieFormObj = new PIEform();
    pieFormObj->show();
}
