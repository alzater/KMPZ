#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dialog_conclusion.h>
#include <nf.h>
#include <temp.h>



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    DialogConclusion *d1;
    nf *n1;
    temp *vr;


private slots:
    void on_bTempInfo_clicked();
    void on_bNext_clicked();
    void on_bVisual_clicked();
    void on_bInstruments_clicked();
};

#endif // DIALOG_H
