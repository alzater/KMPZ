#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <dialog4.h>
#include <nf.h>
#include <temp.h>

namespace Ui {
class conclusion_form;
}

class conclusion_form : public QDialog
{
    Q_OBJECT

public:
    explicit conclusion_form(QWidget *parent = 0);
    ~conclusion_form();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_Binstruments_clicked();

    void on_BtempInfo_clicked();

private:
    Ui::conclusion_form *ui;
    another_conclusion_form *d4;
    NFquantitativeAnswerForm *n1;
    temp * vr;
};

#endif // DIALOG3_H
