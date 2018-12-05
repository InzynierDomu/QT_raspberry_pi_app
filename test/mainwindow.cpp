#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <wiringPi.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wiringPiSetup();
    pinMode(7,OUTPUT);
    digitalWrite(7,LOW);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    digitalWrite(7,HIGH);
    delay(200);
    digitalWrite(7,LOW);
}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}
