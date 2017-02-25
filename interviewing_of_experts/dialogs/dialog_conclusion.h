#ifndef DIALOG_CONCLUSION_H
#define DIALOG_CONCLUSION_H

#include <QDialog>
#include <dialog_clearifying_information.h>

namespace Ui {
class DialogConclusion;
}

class DialogConclusion : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConclusion(QWidget *parent = 0);
    ~DialogConclusion();

private slots:
    void on_bNo_clicked();
    void on_bYes_clicked();

private:
    Ui::DialogConclusion *ui;
    DialogClarifyingInformation *d2;
    DialogConclusion *d1;
};

#endif // DIALOG1_H
