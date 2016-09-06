#include "dialog1.h"
#include "ui_dialog1.h"
#include "model.h"

extern Model model;

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    model.addQuestion( "" );
    model.addAnswer( "" );
    model.addTime( "", "", "", "", "", "" );

    ui->setupUi(this);
    d2 = new Dialog2();
   // connect (temp::on_pushButton_clicked(), SIGNAL(closed()), this, SLOT(openform()));
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{

}

void Dialog1::openform()
{
    this->show();
}


void Dialog1::on_Bno_clicked()
{

}

void Dialog1::on_Byes_clicked()
{
    model.questions.back() = ui->question->text().toStdString();
    model.answers.back() = ui->answer->text().toStdString();

    d2->show();
    this->close();
}
