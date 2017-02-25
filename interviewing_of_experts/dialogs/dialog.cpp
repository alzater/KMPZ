#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    d1 = new DialogConclusion();
    n1 = new nf();
    vr = new temp();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_bInstruments_clicked()
{
    n1->show();
}

void Dialog::on_bTempInfo_clicked()
{
    vr->init( ui->question->text().toStdString(), ui->answer->text().toStdString() );
    vr->show();
}

void Dialog::on_bNext_clicked()
{
    d1->show();
    this->close();
}

void Dialog::on_bVisual_clicked()
{
    QString m = ui->question->text();
    ui->label_2->setText(m);
}
