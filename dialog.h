#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dialog1.h>
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
    Dialog1 *d1;
    nf *n1;
    temp *vr;


private slots:
        void on_pushButton_clicked();
        void on_pushButton_3_clicked();
        void on_pushButton_4_clicked();
        void on_pushButton_2_clicked();
};

#endif // DIALOG_H
