#ifndef DIALOG_CLARIFYING_INFORMATION_H
#define DIALOG_CLARIFYING_INFORMATION_H

#include <QDialog>
#include <dialog3.h>

namespace Ui {
    class DialogClearifyingInformation;
}

class DialogClarifyingInformation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClarifyingInformation(QWidget *parent = 0);
    ~DialogClarifyingInformation();

private slots:
    void on_pushButton_clicked();

    void on_Binput_clicked();

private:
    Ui::DialogClearifyingInformation *ui;
    Dialog3 *d3;
};

#endif // DIALOG_CLARIFYING_INFORMATION_H
