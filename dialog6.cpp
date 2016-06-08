#include "dialog6.h"
#include "ui_dialog6.h"
#include "gap.h"

another_answerFORtheQUESTION_form2::another_answerFORtheQUESTION_form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::another_answerFORtheQUESTION_form2)
{
    ui->setupUi(this);
    n1 = new NFquantitativeAnswerForm();
    vr = new temp();
}

another_answerFORtheQUESTION_form2::~another_answerFORtheQUESTION_form2()
{
    delete ui;
}

void another_answerFORtheQUESTION_form2::on_pushButton_3_clicked()
{


}

void another_answerFORtheQUESTION_form2::on_pushButton_4_clicked()
{


}

void another_answerFORtheQUESTION_form2::on_Binstruments_clicked()
{
    n1->show();
}

void another_answerFORtheQUESTION_form2::on_BtempInfo_clicked()
{
   vr->show();
}

void another_answerFORtheQUESTION_form2::on_Bvisual_clicked()
{
    PIEform *pieFormObj = new PIEform();
    pieFormObj->show();
}
