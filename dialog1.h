#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include <dialog2.h>


namespace Ui {
class definition_ability_conclusion_form;
}

class definition_ability_conclusion_form : public QDialog
{
    Q_OBJECT

public:
    explicit definition_ability_conclusion_form(QWidget *parent = 0);
    ~definition_ability_conclusion_form();

public:
    void setQuestionAndAnswer( const QString & que, const QString & ans );

    QString pie[100];
    int flag=0;

private slots:
    void on_pushButton_clicked();
    void openform();

    void on_Bno_clicked();

    void on_Byes_clicked();

    void on_Bvisual_clicked();

private:
    Ui::definition_ability_conclusion_form *ui;
    patient_info_form *d2;
    definition_ability_conclusion_form *d1;
};

#endif // DIALOG1_H
