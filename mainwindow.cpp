#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interviewing_of_experts/model/model.h"

Model model;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_BnewWords_clicked()
{

}

void MainWindow::on_Bdalee_clicked()
{
    this->close();
}
