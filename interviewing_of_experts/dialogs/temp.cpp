#include "temp.h"
#include "ui_temp.h"

#include "model.h"

extern Model model;

#include <vector>

temp::temp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp)
{
    ui->setupUi(this);

    model.addTime("", "", "", "", "", "");

     QPushButton *but_1 = new QPushButton(this);
    connect(but_1, &QPushButton::clicked, this, &temp::on_pushButton_clicked);
    n4= new nf4();
}

temp::~temp()
{
    delete ui;
}

void temp::init( std::string question, std::string answer )
{
    ui->question->setText(QString(question.c_str()));
    ui->answer->setText(QString(answer.c_str()));

    std::string tmp;

    tmp = findBegins(question);
    if ( !tmp.empty() )
        ui->start_question->setText(tmp.c_str());

    tmp = findDurance(question);
    if ( !tmp.empty() )
        ui->duration_question->setText(tmp.c_str());

    tmp = findEnds(question);
    if ( !tmp.empty() )
        ui->finish_question->setText(tmp.c_str());

    tmp = findBegins(answer);
    if ( !tmp.empty() )
        ui->start_answer->setText(tmp.c_str());

    tmp = findDurance(answer);
    if ( !tmp.empty() )
        ui->duration_answer->setText(tmp.c_str());

    tmp = findEnds(answer);
    if ( !tmp.empty() )
        ui->finish_answer->setText(tmp.c_str());
}

void temp::on_pushButton_clicked()
{

}

void temp::on_pushButton_4_clicked()
{

}

std::string temp::findBegins(std::string str)
{
    std::vector<std::string> dict({"сначало", "вначале", "первым делом", "прежде всего", "с 1го"});
    for ( const auto & frase : dict )
    {
        if ( str.find(frase) != std::string::npos )
            return frase;
    }
    return "";
}

std::string temp::findDurance(std::string str)
{
    std::vector<std::string> dict({"на протяжении недели", "в течение 10 дней"});
    for ( const auto & frase : dict )
    {
        if ( str.find(frase) != std::string::npos )
            return frase;
    }
    return "";
}

std::string temp::findEnds(std::string str)
{
    std::vector<std::string> dict({"вконце", "по 3е", "в заключении"});
    for ( const auto & frase : dict )
    {
        if ( str.find(frase) != std::string::npos )
            return frase;
    }
    return "";
}

void temp::on_Binput_clicked()
{
    model.times.back().questStart = ui->start_question->text().toStdString();
    model.times.back().questEnd = ui->finish_question->text().toStdString();
    model.times.back().questDuration = ui->duration_question->text().toStdString();

    model.times.back().ansStart = ui->start_answer->text().toStdString();
    model.times.back().ansEnd = ui->finish_answer->text().toStdString();
    model.times.back().ansDuration = ui->duration_answer->text().toStdString();

    emit closed();
    this->close();
}

void temp::on_Binstruments_clicked()
{
    n4->show();
}

void temp::on_BtempOs_clicked()
{
   model.genXML();
}
