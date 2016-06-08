#include "dialog3.h"
#include "ui_dialog3.h"
#include "gap.h"
#include "fstream"
#include "QTreeWidget"

using namespace std;

conclusion_form::conclusion_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conclusion_form)
{
    ui->setupUi(this);
    d4 = new another_conclusion_form();
    n1 = new NFquantitativeAnswerForm();
    vr =  new temp();

//    ui->conclusion->setText(to_string(answer_question_form::test).c_str());
}

conclusion_form::~conclusion_form()
{
    delete ui;
}

void conclusion_form::on_pushButton_clicked()
{
    d4->show();
    d4->setQuestionAndAnswer(this->que,this->ans);
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

void conclusion_form::on_pushButton_2_clicked()
{
    pie[11]=ui->conclusion->text();
    PIEform *pieFormObj = new PIEform();
        pieFormObj->createPIE(pie[0], pie[1], pie[2], pie[3], pie[4], pie[5], pie[11]);

    pieFormObj->show();
}
