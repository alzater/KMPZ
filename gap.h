#ifndef GAP_H
#define GAP_H
#include "QTreeWidgetItem"

#include <QDialog>

namespace Ui {
class PIEform;
}

class PIEform : public QDialog
{
    Q_OBJECT

public:
    explicit PIEform(QWidget *parent = 0);
    ~PIEform();

    void createPIE (QString &, QString &, QString &,QString &,QString &,QString &,QString &);

private:
    Ui::PIEform *ui;
};

#endif // GAP_H
