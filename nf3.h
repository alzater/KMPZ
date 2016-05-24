#ifndef NF3_H
#define NF3_H

#include <QDialog>
#include <nf4.h>

namespace Ui {
class NFconfidenceForm;
}

class NFconfidenceForm : public QDialog
{
    Q_OBJECT

public:
    explicit NFconfidenceForm(QWidget *parent = 0);
    ~NFconfidenceForm();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::NFconfidenceForm *ui;
//    nf4 *n4;
};

#endif // NF3_H
