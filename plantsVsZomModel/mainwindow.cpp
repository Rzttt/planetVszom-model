#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDialog>
#include <QMessageBox>
#include<QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("planet vs zombe model");

    resize(720,480);
    QPushButton *btn = new QPushButton("exit",this);
    btn->move(600,350);
    connect(btn,&QPushButton::clicked,[=](){
            QMessageBox::question(this,"提示","是否退出游戏");

    });
     QPushButton *btn1 = new QPushButton("play",this);
     btn1->move(600,200);
}

MainWindow::~MainWindow()
{
    delete ui;
}

