#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>
#include <dialog6.h>

namespace Ui {
class another_answerFORtheQUESTION_form;
}

class another_answerFORtheQUESTION_form : public QDialog
{
    Q_OBJECT

public:
    explicit another_answerFORtheQUESTION_form(QWidget *parent = 0);
    ~another_answerFORtheQUESTION_form();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_Bno_clicked();

    void on_Byes_clicked();

private:
    Ui::another_answerFORtheQUESTION_form *ui;
    another_answerFORtheQUESTION_form2 *d6;

public:
    void setQuestionAndAnswer( const QString & que, const QString & ans );
};

#endif // DIALOG5_H
