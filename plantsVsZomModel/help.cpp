#include "help.h"
#include "ui_help.h"
#include<QPushButton>
help::help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    help_show();
}
void help::help_show()
{
    QPushButton *Return = new QPushButton("返回主菜单",this);
    Return->move(600,400);
    setWindowTitle("planet vs zombe model");
    this->resize(720,480);
   connect(Return,&QPushButton::clicked,this,&QPushButton::close);
}
help::~help()
{
    delete ui;
}
