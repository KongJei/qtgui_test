#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    number = 0;
    ui->num->setText(QString::number(number));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_push_clicked()
{
    number++;
    ui->num->setText(QString::number(number));
}

