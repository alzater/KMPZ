#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include <dialog2.h>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:
    void on_pushButton_clicked();
    void openform();

    void on_Bno_clicked();

    void on_Byes_clicked();

private:
    Ui::Dialog1 *ui;
    Dialog2 *d2;
    Dialog1 *d1;
};

#endif // DIALOG1_H
