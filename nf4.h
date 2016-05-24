#ifndef NF4_H
#define NF4_H

#include <QDialog>

namespace Ui {
class NFmainForm;
}

class NFmainForm : public QDialog
{
    Q_OBJECT

public:
    explicit NFmainForm(QWidget *parent = 0);
    ~NFmainForm();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::NFmainForm *ui;
};

#endif // NF4_H
