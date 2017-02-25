#include "dialog_conclusion.h"
#include "ui_dialog_conslusion.h"
#include "model.h"

extern Model model;

DialogConclusion::DialogConclusion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConclusion)
{
    model.addQuestion( "" );
    model.addAnswer( "" );
    model.addTime( "", "", "", "", "", "" );

    ui->setupUi(this);
    d2 = new DialogClarifyingInformation();
}

DialogConclusion::~DialogConclusion()
{
    delete ui;
}

void DialogConclusion::on_bNo_clicked()
{

}

void DialogConclusion::on_bYes_clicked()
{
    model.questions.back() = ui->eQuestion->text().toStdString();
    model.answers.back() = ui->eAnswer->text().toStdString();

    d2->show();
    this->close();
}
