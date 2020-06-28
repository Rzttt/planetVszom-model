#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDialog>
#include <QMessageBox>
#include <QPainter>
#include "help.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("planet vs zombe model");

    resize(720,480);

    QPixmap pixmap(":/image/001.jpg");

    QPushButton *btn = new QPushButton("exit",this);
    btn->move(600,350);
    connect(btn,&QPushButton::clicked,[=](){
            QMessageBox::question(this,"提示","是否退出游戏");

    });
     QPushButton *btn1 = new QPushButton("play",this);
     btn1->move(600,200);


     QPushButton *btn2 = new QPushButton("help",this);
     btn2->move(600,275);

     connect(btn2,&QPushButton::clicked,this,&MainWindow::ShowHelp);

}

void MainWindow::ShowHelp()
{
    this->hide();
    help *HelpShow = new help;
    HelpShow->show();
    this->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}

