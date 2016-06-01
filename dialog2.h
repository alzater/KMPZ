#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <dialog3.h>
#include <QString>
using namespace std;

namespace Ui {
class patient_info_form;
}

class patient_info_form : public QDialog
{
    Q_OBJECT

public:
    explicit patient_info_form(QWidget *parent = 0);
    ~patient_info_form();

private slots:
    void on_pushButton_clicked();

    void on_Binput_clicked();

private:
    Ui::patient_info_form *ui;
    conclusion_form *d3;

public:
    string que;
    string ans;
};

#endif // DIALOG2_H
