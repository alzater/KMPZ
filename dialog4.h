#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>
#include <dialog5.h>


namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = 0);
    ~Dialog4();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Dialog4 *ui;
    Dialog5 *d5;

};

#endif // DIALOG4_H
