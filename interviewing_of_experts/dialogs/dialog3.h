#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <dialog4.h>
#include <nf.h>
#include <temp.h>

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = 0);
    ~Dialog3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_Binstruments_clicked();

    void on_BtempInfo_clicked();

private:
    Ui::Dialog3 *ui;
    Dialog4 *d4;
    nf *n1;
    temp * vr;
};

#endif // DIALOG3_H
