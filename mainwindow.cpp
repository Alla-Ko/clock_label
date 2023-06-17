
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setFixedSize(420,150);
    ui->setupUi(this);
    QTimer* timer=new QTimer(this);
    connect(timer, &QTimer::timeout, this,&MainWindow:: showtime);
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: showtime(){

    QString text=QDateTime::currentDateTime().toString("hh:mm:ss");
    ui->label->setText(text);
}

