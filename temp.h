#ifndef TEMP_H
#define TEMP_H

#include <QDialog>
#include <nf4.h>


namespace Ui {
class temp;
}

class temp : public QDialog
{
    Q_OBJECT

public:
    explicit temp(QWidget *parent = 0);
    ~temp();

signals:
    void closed();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::temp *ui;
    nf4 *n4;

};

#endif // TEMP_H
