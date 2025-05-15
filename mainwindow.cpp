#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(355, 500);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::start_pushButton()
{

}

void MainWindow::config_pushButton()
{

}

