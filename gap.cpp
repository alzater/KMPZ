#include "gap.h"
#include "ui_gap.h"

gap::gap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gap)
{
    ui->setupUi(this);
}

gap::~gap()
{
    delete ui;
}
