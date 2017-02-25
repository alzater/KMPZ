#ifndef NF_H
#define NF_H

#include <QDialog>
#include <nf2.h>

namespace Ui {
class nf;
}

class nf : public QDialog
{
    Q_OBJECT

public:
    explicit nf(QWidget *parent = 0);
    ~nf();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::nf *ui;
    nf2 *n2;
};

#endif // NF_H
