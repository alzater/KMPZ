#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dialog1.h>
#include <nf.h>
#include <temp.h>



namespace Ui {
class answer_question_form;
}

class answer_question_form : public QDialog
{
    Q_OBJECT

public:
    explicit answer_question_form(QWidget *parent = 0);
    ~answer_question_form();

private:
    Ui::answer_question_form *ui;
    definition_ability_conclusion_form *d1;
    NFquantitativeAnswerForm *n1;
    temp *vr;


private slots:
        void on_pushButton_clicked();
        void on_pushButton_3_clicked();
        void on_pushButton_4_clicked();
        void on_pushButton_2_clicked();
        void on_Binstruments_clicked();
        void on_BtempInfo_clicked();
        void on_Bdalee_clicked();
        void on_Bvisual_clicked();
};

#endif // DIALOG_H
