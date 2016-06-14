#ifndef TEMP_H
#define TEMP_H

#include <QDialog>
#include <nf4.h>

using namespace std;

class time
{
    public:
        time();
        time (const string &, const string &,const string &,const string &);
        time (const string &, const string &, int & );
        void setTime(const int &, int &);
        void getTime();
        ~time()
        {

        }
    private:
        string _start;
        string _finish;
        string _duration;
        string _period;
        bool _hasSeconds;
        bool _hasMinutes;
        bool _hasHours;
        bool _hasDays;
        bool _hasWeeks;
        bool _hasMonths;
        bool _hasYears;
        int _seconds;
        int _minutes;
        int _hours;
        int _days;
        int _weeks;
        int _months;
        int _years;
};

class unixtime
{
    public:

    private:
        double time;
};

namespace Ui {

class temp;
}

class temp : public QDialog
{
    Q_OBJECT

public:
    explicit temp(QWidget *parent = 0);
    ~temp();

    void init( std::string question, std::string answer );
    void createPZobj(string & que, string &  ans);
    void createPZint(string & que, string &  ans, string & open, string & close);
    void createTKBnew (string & que, string &  ans, string & open, string & close);

signals:
    void closed();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_Binput_clicked();

    void on_Binstruments_clicked();

private:
    std::string findBegins(std::string str);
    std::string findEnds(std::string str);
    std::string findDurance(std::string str);
private:
    Ui::temp *ui;
    NFmainForm *n4;
};



#endif // TEMP_H
