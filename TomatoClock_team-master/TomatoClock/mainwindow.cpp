#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "completed.h"
#include "clock.h"
#include "settings.h"
#include "addtasks.h"
#include "managetasks.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->textEdit->setReadOnly(true);
    ui->graphicsView->setStyleSheet(tr("background-image: url(images/timg.jpg);"));
    myShow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myShow()
{

    QSqlQuery query;
    bool success = query.exec("select *from information");
    if (success)
    {
        //qDebug()<<"yes";
        query.next();
        while(query.value(3).toString() != '1'){
            if(query.next() == NULL){
                return ;
            }
        }
        ui->lineEdit->setText(query.value(1).toString());
        ui->textEdit->setText(query.value(2).toString());

    }
}

void MainWindow::on_pushButton_clicked()
{
    MainWindow*todolist=new MainWindow;
    todolist->show();
    this->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    Completed *completed=new Completed;
    completed->show();
    this->hide();
}


void MainWindow::on_pushButton_3_clicked()
{
    Clock*clock=new Clock;
    clock->show();
    this->hide();
}

void MainWindow::on_pushButton_4_clicked()
{
    Settings*settings=new Settings;
    settings->show();
    this->hide();
}

void MainWindow::on_pushButton_5_clicked()
{
    AddTasks*addtasks=new AddTasks;
    addtasks->show();
    this->hide();
}

void MainWindow::on_pushButton_6_clicked()
{
    ManageTasks*managetasks=new ManageTasks;
    managetasks->show();
    this->hide();
}
