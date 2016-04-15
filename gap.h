#ifndef GAP_H
#define GAP_H

#include <QDialog>

namespace Ui {
class gap;
}

class gap : public QDialog
{
    Q_OBJECT

public:
    explicit gap(QWidget *parent = 0);
    ~gap();

private:
    Ui::gap *ui;
};

#endif // GAP_H
