#include "managetasks.h"
#include "ui_managetasks.h"
#include "mainwindow.h"
#include "completed.h"
#include "clock.h"
#include "settings.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QMessageBox>

ManageTasks::ManageTasks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageTasks)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->graphicsView->setStyleSheet(tr("background-image: url(images/timg.jpg);"));
    ui->pushButton_5->setStyleSheet(tr("background-image: url(images/deletes.jpg);"));
    myShow();
}

ManageTasks::~ManageTasks()
{
    delete ui;
}

void ManageTasks::myShow()
{

    QSqlQuery query;
    bool success = query.exec("select *from information");
    if (success)
    {
        //qDebug()<<"yes";
        query.next();
        while(query.value(3).toString() != '1'){
            if (query.next() == NULL){
                return ;
            }
        }
        ui->lineEdit->setText(query.value(1).toString());
    }
}

void ManageTasks::on_pushButton_clicked()
{
    MainWindow*todolist=new MainWindow;
    todolist->show();
    this->hide();
}

void ManageTasks::on_pushButton_2_clicked()
{
    Completed*completed=new Completed;
    completed->show();
    this->hide();
}

void ManageTasks::on_pushButton_3_clicked()
{
    Clock*clock=new Clock;
    clock->show();
    this->hide();
}

void ManageTasks::on_pushButton_4_clicked()
{
    Settings*settings=new Settings;
    settings->show();
    this->hide();
}

void ManageTasks::on_pushButton_5_clicked()
{
    QSqlQuery query;
    QString i = "8";
    QString updated = QString("update information set conditions = 0 where id = ");
    updated += i;
    qDebug()<<updated;
    bool success = query.exec(updated);
    if (success){
        QMessageBox::about(NULL, "Save", "change condition success");
    }
    else {
        QMessageBox::about(NULL, "Save", "error change condition");
    }
}
