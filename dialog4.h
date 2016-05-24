#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>
#include <dialog5.h>


namespace Ui {
class another_conclusion_form;
}

class another_conclusion_form : public QDialog
{
    Q_OBJECT

public:
    explicit another_conclusion_form(QWidget *parent = 0);
    ~another_conclusion_form();

private slots:
    void on_pushButton_3_clicked();

    void on_Byes_clicked();

    void on_Bno_clicked();

private:
    Ui::another_conclusion_form *ui;
    another_answerFORtheQUESTION_form *d5;

};

#endif // DIALOG4_H
