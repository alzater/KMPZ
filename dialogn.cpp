#include "dialogn.h"
#include "ui_dialogn.h"

Dialogn::Dialogn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogn)
{
    ui->setupUi(this);
}

Dialogn::~Dialogn()
{
    delete ui;
}
