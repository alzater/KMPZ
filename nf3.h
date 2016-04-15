#ifndef NF3_H
#define NF3_H

#include <QDialog>
#include <nf4.h>

namespace Ui {
class nf3;
}

class nf3 : public QDialog
{
    Q_OBJECT

public:
    explicit nf3(QWidget *parent = 0);
    ~nf3();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::nf3 *ui;
    nf4 *n4;
};

#endif // NF3_H
