#ifndef NF_H
#define NF_H

#include <QDialog>
#include <nf2.h>

namespace Ui {
class NFquantitativeAnswerForm;
}

class NFquantitativeAnswerForm : public QDialog
{
    Q_OBJECT

public:
    explicit NFquantitativeAnswerForm(QWidget *parent = 0);
    ~NFquantitativeAnswerForm();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::NFquantitativeAnswerForm *ui;
    NFerrorForm *n2;
};

#endif // NF_H
