/********************************************************************************
** Form generated from reading UI file 'completed.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETED_H
#define UI_COMPLETED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Completed
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Completed)
    {
        if (Completed->objectName().isEmpty())
            Completed->setObjectName(QStringLiteral("Completed"));
        Completed->resize(875, 546);
        pushButton = new QPushButton(Completed);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 101, 41));
        pushButton_2 = new QPushButton(Completed);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 220, 101, 41));
        pushButton_3 = new QPushButton(Completed);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 280, 101, 41));
        pushButton_4 = new QPushButton(Completed);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 340, 101, 41));
        graphicsView = new QGraphicsView(Completed);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 131, 131));
        lineEdit = new QLineEdit(Completed);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 40, 531, 51));

        retranslateUi(Completed);

        QMetaObject::connectSlotsByName(Completed);
    } // setupUi

    void retranslateUi(QDialog *Completed)
    {
        Completed->setWindowTitle(QApplication::translate("Completed", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Completed", "Todolist", nullptr));
        pushButton_2->setText(QApplication::translate("Completed", "Completed", nullptr));
        pushButton_3->setText(QApplication::translate("Completed", "Clock", nullptr));
        pushButton_4->setText(QApplication::translate("Completed", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Completed: public Ui_Completed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETED_H
