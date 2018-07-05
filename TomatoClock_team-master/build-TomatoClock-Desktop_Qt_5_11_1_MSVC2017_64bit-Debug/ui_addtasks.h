/********************************************************************************
** Form generated from reading UI file 'addtasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKS_H
#define UI_ADDTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTasks
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;

    void setupUi(QDialog *AddTasks)
    {
        if (AddTasks->objectName().isEmpty())
            AddTasks->setObjectName(QStringLiteral("AddTasks"));
        AddTasks->resize(883, 489);
        graphicsView = new QGraphicsView(AddTasks);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 131, 131));
        pushButton = new QPushButton(AddTasks);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 121, 51));
        pushButton_2 = new QPushButton(AddTasks);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 210, 121, 51));
        pushButton_3 = new QPushButton(AddTasks);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 280, 121, 51));
        pushButton_4 = new QPushButton(AddTasks);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 350, 121, 51));
        lineEdit = new QLineEdit(AddTasks);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 581, 51));
        pushButton_5 = new QPushButton(AddTasks);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 210, 81, 71));
        textEdit = new QTextEdit(AddTasks);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 90, 581, 111));

        retranslateUi(AddTasks);

        QMetaObject::connectSlotsByName(AddTasks);
    } // setupUi

    void retranslateUi(QDialog *AddTasks)
    {
        AddTasks->setWindowTitle(QApplication::translate("AddTasks", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("AddTasks", "Todolist", nullptr));
        pushButton_2->setText(QApplication::translate("AddTasks", "Completed", nullptr));
        pushButton_3->setText(QApplication::translate("AddTasks", "Clock", nullptr));
        pushButton_4->setText(QApplication::translate("AddTasks", "Settings", nullptr));
        pushButton_5->setText(QApplication::translate("AddTasks", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTasks: public Ui_AddTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKS_H
