#ifndef DIALOGN_H
#define DIALOGN_H

#include <QDialog>

namespace Ui {
class Dialogn;
}

class Dialogn : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogn(QWidget *parent = 0);
    ~Dialogn();

private:
    Ui::Dialogn *ui;
};

#endif // DIALOGN_H
