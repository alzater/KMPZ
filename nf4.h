#ifndef NF4_H
#define NF4_H

#include <QDialog>

namespace Ui {
class nf4;
}

class nf4 : public QDialog
{
    Q_OBJECT

public:
    explicit nf4(QWidget *parent = 0);
    ~nf4();

private:
    Ui::nf4 *ui;
};

#endif // NF4_H
