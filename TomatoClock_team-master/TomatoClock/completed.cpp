#include "completed.h"
#include "ui_completed.h"
#include "mainwindow.h"
#include "clock.h"
#include "settings.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>


Completed::Completed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Completed)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->graphicsView->setStyleSheet(tr("background-image: url(images/timg.jpg);"));
    myShow();
}

Completed::~Completed()
{
    delete ui;
}

void Completed::myShow()
{
    QSqlQuery query;
    bool success = query.exec("select *from information");
    if (success)
    {
        qDebug()<<"yes";
        query.next();
        while(query.value(3).toString() != '0'){
            if (query.next() == NULL){
                return ;
            }
        }
        ui->lineEdit->setText(query.value(1).toString());
    }
}


void Completed::on_pushButton_clicked()
{
    MainWindow*todolist=new MainWindow;
    todolist->show();
    this->hide();
}

void Completed::on_pushButton_2_clicked()
{
    Completed*completed=new Completed;
    completed->show();
    this->hide();
}

void Completed::on_pushButton_3_clicked()
{
    Clock*clock=new Clock;
    clock->show();
    this->hide();
}

void Completed::on_pushButton_4_clicked()
{
    Settings*settings=new Settings;
    settings->show();
    this->hide();
}
