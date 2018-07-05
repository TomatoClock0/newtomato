#ifndef MANAGETASKS_H
#define MANAGETASKS_H

#include <QDialog>

namespace Ui {
class ManageTasks;
}

class ManageTasks : public QDialog
{
    Q_OBJECT

public:
    explicit ManageTasks(QWidget *parent = 0);
    ~ManageTasks();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void myShow();
    void on_pushButton_5_clicked();

private:
    Ui::ManageTasks *ui;
};

#endif // MANAGETASKS_H
