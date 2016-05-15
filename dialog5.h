#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>
#include <dialog6.h>

namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = 0);
    ~Dialog5();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_Bno_clicked();

    void on_Byes_clicked();

private:
    Ui::Dialog5 *ui;
    Dialog6 *d6;
};

#endif // DIALOG5_H
