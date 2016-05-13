#include "temp.h"
#include "ui_temp.h"

#include <vector>

temp::temp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp)
{
    ui->setupUi(this);
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
    ui->lineEdit_5->setText(QString(question.c_str()));
    ui->lineEdit_4->setText(QString(answer.c_str()));

    std::string tmp;

    tmp = findBegins(question);
    if ( !tmp.empty() )
        ui->lineEdit_6->setText(tmp.c_str());

    tmp = findDurance(question);
    if ( !tmp.empty() )
        ui->lineEdit_7->setText(tmp.c_str());

    tmp = findEnds(question);
    if ( !tmp.empty() )
        ui->lineEdit_8->setText(tmp.c_str());

    tmp = findBegins(answer);
    if ( !tmp.empty() )
        ui->lineEdit->setText(tmp.c_str());

    tmp = findDurance(answer);
    if ( !tmp.empty() )
        ui->lineEdit_2->setText(tmp.c_str());

    tmp = findEnds(answer);
    if ( !tmp.empty() )
        ui->lineEdit_3->setText(tmp.c_str());
}

void temp::on_pushButton_clicked()
{
    emit closed();
    this->close();
}

void temp::on_pushButton_4_clicked()
{
   n4->show();
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
