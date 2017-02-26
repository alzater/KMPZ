#ifndef TASK_TYPE_DEFINITION_DIALOG_H
#define TASK_TYPE_DEFINITION_DIALOG_H

#include <QDialog>

namespace Ui {
class TaskTypeDefinitionDialog;
}

class TaskTypeDefinitionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TaskTypeDefinitionDialog(QWidget *parent = 0);
    ~TaskTypeDefinitionDialog();

private:
    Ui::TaskTypeDefinitionDialog *ui;
};

#endif // TASK_TYPE_DEFINITION_DIALOG_H
