#include "temp.h"
#include "ui_temp.h"
#include "fstream"
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

    createPZobj(ui->question->text().toStdString(),ui->answer->text().toStdString());
    createPZint(ui->question->text().toStdString(),ui->answer->text().toStdString(), ui->start_answer->text().toStdString(), ui->finish_answer->text().toStdString());
}

void temp::on_pushButton_clicked()
{

}

void temp::on_pushButton_4_clicked()
{

}

std::string temp::findBegins(std::string str)
{
    std::vector<std::string> dict({"сначала", "вначале", "первым делом", "прежде всего", "с 1го", "С конца 1995 года "
                                  });
    for ( const auto & frase : dict )
    {
        if ( str.find(frase) != std::string::npos )
            return frase;
    }
    return "";
}

std::string temp::findDurance(std::string str)
{
    std::vector<std::string> dict({"на протяжении недели", "в течение 10 дней", "в течение ночи"});
    for ( const auto & frase : dict )
    {
        if ( str.find(frase) != std::string::npos )
            return frase;
    }
    return "";
}

std::string temp::findEnds(std::string str)
{
    std::vector<std::string> dict({"вконце", "по 3е", "в заключении", "по август 1996", "через 1,5 часа"});
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

void temp::createPZobj(string &que, string &ans)
{
    ofstream xmloutobj("Objects.xml",ios_base::app);
    xmloutobj <<"<Object Name=Пациент>" << endl;
    xmloutobj <<"  <Attributes>" << endl;
    xmloutobj <<"      <Attribute Value=Пациент."+ que + ">" <<endl;
    xmloutobj <<"		  <String Value="+ ans+ "/>" << endl;
    xmloutobj <<"	   </Attribute>" <<endl;
    xmloutobj <<"  </Attributes>"<<endl;
    xmloutobj <<"</Object>"<<endl;

}

void temp::createPZint(string &que, string &ans, string &open, string &close)
{
    ofstream xmloutint("Allen2.xml",ios_base::app);
    xmloutint << "    <Interval Name=Пациент."+que+"("+ans+")>" <<endl;
    xmloutint << "      <Open>" << endl;
    xmloutint << "        <EqOp Value=eq>" <<endl;
    xmloutint << "          <Attribute Value=Пациент.Симптомы.Срок_давности />" << endl;
    xmloutint << "          <String Value="+open+ " />" << endl;
    xmloutint << "        </EqOp>" <<endl;
    xmloutint << "      </Open>" << endl;
    xmloutint << "      <Close>" << endl;
    xmloutint << "        <EqOp Value=eq>" <<endl;
    xmloutint << "          <Attribute Value=Пациент.Симптомы.Срок_давности />" << endl;
    xmloutint << "          <String Value="+close+ " />" << endl;
    xmloutint << "        </EqOp>" <<endl;
    xmloutint << "      </Close>" << endl;
    xmloutint << "    </Interval>" << endl;
}

time::time()
{
    _start="";
    _finish="";
    _duration="";
    _period="";
     _hasSeconds=0;
     _hasMinutes=0;
     _hasHours=0;
     _hasDays=0;
     _hasWeeks=0;
     _hasMonths=0;
     _hasYears=0;
}
time::time (const string & start, const string & finish,const string & duration,const string & period)
{
    _start=start;
    _finish=finish;
    _duration=duration;
    _period=period;
}
time::time (const string & firstVariable, const string & secondVariable, int & conbinationType)
{
//        начало и конец: conbinationType  =1
//        начало и период: conbinationType =2
//        конец и период: conbinationType  =3
    switch (conbinationType)
    {
        case 1:
        {
            _start=firstVariable;
            _finish=secondVariable;
            break;
        }
        case 2:
        {
            _start = firstVariable;
            _period=secondVariable;
            break;
        }
        case 3:
        {
            _finish = firstVariable;
            _period = secondVariable;
            break;
        }
    }
}
void time::setTime(const int & value, int & valueType)
{
    switch (valueType)
    {
        case 1:
        {
            _hasMinutes=1;
            _minutes = value;
            break;
        }
        case 2:
        {
            _hasHours=1;
            _hours = value;
            break;
        }
        case 3:
        {
            _hasDays=1;
            _days = value;
            break;
        }
        case 4:
        {
            _hasWeeks=1;
            _weeks = value;
            break;
        }
        case 5:
        {
            _hasMonths=1;
            _months = value;
            break;
        }
        case 6:
        {
            _hasYears=1;
            _years = value;
            break;
        }
    }
}
