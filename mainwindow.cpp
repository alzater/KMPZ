#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "interviewing_of_experts/dialogs/task_type_definition_dialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_expertsInterviewingButton_clicked()
{
    TaskTypeDefinitionDialog* taskTypeDefinitionDialog = new TaskTypeDefinitionDialog;
    taskTypeDefinitionDialog->show();
    this->close();
}
