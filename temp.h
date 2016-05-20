#ifndef TEMP_H
#define TEMP_H

#include <QDialog>
#include <nf4.h>


using namespace std;

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
    nf4 *n4;
};

class time
{
public:
    string start;
    string finish;
    string duration;
    string period;
private:
};

class unixtime
{
public:
    double time;
};

#endif // TEMP_H
