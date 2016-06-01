#include "dialog4.h"
#include "ui_dialog4.h"
using namespace std;

another_conclusion_form::another_conclusion_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::another_conclusion_form)
{
    ui->setupUi(this);
    d5 = new another_answerFORtheQUESTION_form();
}

another_conclusion_form::~another_conclusion_form()
{
    delete ui;
}

void another_conclusion_form::on_pushButton_3_clicked()
{

}

void another_conclusion_form::on_Byes_clicked()
{

}

void another_conclusion_form::on_Bno_clicked()
{
    d5->show();
    d5->setQuestionAndAnswer(ui->lastquestion->text(), ui->comboBox_answers->currentText());
    this->close();
}
void another_conclusion_form::setQuestionAndAnswer(const string & que, const string & ans)
{
    ui->lastquestion->setText(que.c_str());
    ui->comboBox_answers->addItem(ans.c_str());
}
