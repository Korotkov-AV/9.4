#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("first");
    ui->comboBox->addItem("second");
    ui->comboBox->addItem("third");
    ui->radioButton->setObjectName("But1");
    ui->radioButton_2->setObjectName("But2");
    ui->pushButton->setText("click");
    ui->pushButton->setCheckable(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    d.open();
}

