#include "task_type_definition_dialog.h"
#include "ui_task_type_definition_dialog.h"

TaskTypeDefinitionDialog::TaskTypeDefinitionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaskTypeDefinitionDialog)
{
    ui->setupUi(this);
}

TaskTypeDefinitionDialog::~TaskTypeDefinitionDialog()
{
    delete ui;
}
