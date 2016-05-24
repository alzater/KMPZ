#ifndef NF2_H
#define NF2_H

#include <QDialog>
#include <nf3.h>

namespace Ui {
class NFerrorForm;
}

class NFerrorForm : public QDialog
{
    Q_OBJECT

public:
    explicit NFerrorForm(QWidget *parent = 0);
    ~NFerrorForm();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::NFerrorForm *ui;
    NFconfidenceForm *n3;
};

#endif // NF2_H
