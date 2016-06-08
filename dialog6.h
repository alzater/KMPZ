#ifndef DIALOG6_H
#define DIALOG6_H

#include <QDialog>
#include <nf.h>
#include <temp.h>

namespace Ui {
class another_answerFORtheQUESTION_form2;
}

class another_answerFORtheQUESTION_form2 : public QDialog
{
    Q_OBJECT

public:
    explicit another_answerFORtheQUESTION_form2(QWidget *parent = 0);
    ~another_answerFORtheQUESTION_form2();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_Binstruments_clicked();

    void on_BtempInfo_clicked();

    void on_Bvisual_clicked();

private:
    Ui::another_answerFORtheQUESTION_form2 *ui;
    NFquantitativeAnswerForm *n1;
    temp *vr;
};

#endif // DIALOG6_H
