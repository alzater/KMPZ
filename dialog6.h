#ifndef DIALOG6_H
#define DIALOG6_H

#include <QDialog>
#include <nf.h>
#include <temp.h>

namespace Ui {
class Dialog6;
}

class Dialog6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog6(QWidget *parent = 0);
    ~Dialog6();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog6 *ui;
    nf *n1;
    temp *vr;
};

#endif // DIALOG6_H
