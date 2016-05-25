#include "temp.h"
#include "ui_temp.h"

#include <vector>
using namespace std;

temp::temp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::temp)
{
    ui->setupUi(this);
     QPushButton *but_1 = new QPushButton(this);
    connect(but_1, &QPushButton::clicked, this, &temp::on_pushButton_clicked);
    n4= new NFmainForm();
}

temp::~temp()
{
    delete ui;
}

void temp::init( string question, string answer )
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
    emit closed();
    this->close();
}

void temp::on_Binstruments_clicked()
{
    n4->show();
}

time:: time()
{
    start="";
    finish="";
    duration="";
    period="";
}
time:: time (const string & a, const string & b,const string & c,const string & d)
{
    start=a;
    finish=b;
    duration=c;
    period=d;
}
time:: time (const string & a, const string & b, int & conbinationType)
{
//        начало и конец: conbinationType  =1
//        начало и период: conbinationType =2
//        конец и период: conbinationType  =3
    switch (conbinationType)
    {
        case 1:
        {
            start=a;
            finish=b;
            break;
        }
        case 2:
        {
            start = a;
            period=b;
            break;
        }
        case 3:
        {
            finish = a;
            period = b;
            break;
        }
    }
}
