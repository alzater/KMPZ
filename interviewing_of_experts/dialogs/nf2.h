#ifndef NF2_H
#define NF2_H

#include <QDialog>
#include <nf3.h>

namespace Ui {
class nf2;
}

class nf2 : public QDialog
{
    Q_OBJECT

public:
    explicit nf2(QWidget *parent = 0);
    ~nf2();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::nf2 *ui;
    nf3 *n3;
};

#endif // NF2_H
