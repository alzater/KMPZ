#include "nf.h"
#include "ui_nf.h"

NFquantitativeAnswerForm::NFquantitativeAnswerForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NFquantitativeAnswerForm)
{
    ui->setupUi(this);
    n2 = new NFerrorForm();
}

NFquantitativeAnswerForm::~NFquantitativeAnswerForm()
{
    delete ui;
}

void NFquantitativeAnswerForm::on_pushButton_3_clicked()
{
    n2->show();
    this->close();
}
