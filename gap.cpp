#include "gap.h"
#include "ui_gap.h"

using namespace std;

PIEform::PIEform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PIEform)
{
    ui->setupUi(this);


}

PIEform::~PIEform()
{
    delete ui;
}

void PIEform::createPIE(QString & que, QString & ans, QString &q,QString &q2, QString &q3,QString &q4,QString &q5)
{
    QTreeWidgetItem *one = new QTreeWidgetItem;
    QTreeWidgetItem *two = new QTreeWidgetItem;
    ui->treeWidget->setColumnCount(1);
    ui->treeWidget->addTopLevelItem(one);
    ui->treeWidget->addTopLevelItem(two);
    one->setText(0,que);
    two->setText(0,ans);
    QTreeWidgetItem *three = new QTreeWidgetItem;
    QTreeWidgetItem *four = new QTreeWidgetItem;
    QTreeWidgetItem *five = new QTreeWidgetItem;
    QTreeWidgetItem *six = new QTreeWidgetItem;
    QTreeWidgetItem *seven = new QTreeWidgetItem;
    two->addChild(three);
    three->setText(0,q);
    two->addChild(four);
    four->setText(0,q2);
    four->addChild(five);
    five->setText(0,q3);
    four->addChild(six);
    six->setText(0,q4);
    six->addChild(seven);
    seven->setText(0,q5);

}
