#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_authentication_clicked() //request authentication if pressed
{
    //todo if authentication is true
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_toolButton_clicked() //change to settings widget
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_buttonBox_accepted() //ok button of settings widget
{
    //todo if settings have to be saved or not...
    ui->stackedWidget->setCurrentIndex(1);
}
