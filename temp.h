#ifndef TEMP_H
#define TEMP_H

#include <QDialog>


namespace Ui {
class temp;
}

class temp : public QDialog
{
    Q_OBJECT

public:
    explicit temp(QWidget *parent = 0);
    ~temp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::temp *ui;

};

#endif // TEMP_H
