/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Clock
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Clock)
    {
        if (Clock->objectName().isEmpty())
            Clock->setObjectName(QStringLiteral("Clock"));
        Clock->resize(878, 572);
        pushButton = new QPushButton(Clock);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 111, 41));
        pushButton_2 = new QPushButton(Clock);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 220, 111, 41));
        pushButton_3 = new QPushButton(Clock);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 340, 111, 41));
        pushButton_4 = new QPushButton(Clock);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 280, 111, 41));
        label = new QLabel(Clock);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 50, 41, 16));
        lcdNumber = new QLCDNumber(Clock);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(370, 120, 161, 141));
        graphicsView = new QGraphicsView(Clock);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 131, 131));
        pushButton_5 = new QPushButton(Clock);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 310, 71, 71));
        pushButton_6 = new QPushButton(Clock);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(450, 310, 71, 71));

        retranslateUi(Clock);

        QMetaObject::connectSlotsByName(Clock);
    } // setupUi

    void retranslateUi(QDialog *Clock)
    {
        Clock->setWindowTitle(QApplication::translate("Clock", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Clock", "Todolist", nullptr));
        pushButton_2->setText(QApplication::translate("Clock", "Completed", nullptr));
        pushButton_3->setText(QApplication::translate("Clock", "Settings", nullptr));
        pushButton_4->setText(QApplication::translate("Clock", "Clock", nullptr));
        label->setText(QApplication::translate("Clock", "Clock", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Clock: public Ui_Clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
