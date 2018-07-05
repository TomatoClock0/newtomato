/********************************************************************************
** Form generated from reading UI file 'managetasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGETASKS_H
#define UI_MANAGETASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageTasks
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ManageTasks)
    {
        if (ManageTasks->objectName().isEmpty())
            ManageTasks->setObjectName(QStringLiteral("ManageTasks"));
        ManageTasks->resize(956, 558);
        graphicsView = new QGraphicsView(ManageTasks);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 131, 131));
        pushButton = new QPushButton(ManageTasks);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 131, 51));
        pushButton_2 = new QPushButton(ManageTasks);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 230, 131, 51));
        pushButton_3 = new QPushButton(ManageTasks);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 300, 131, 51));
        pushButton_4 = new QPushButton(ManageTasks);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 370, 131, 51));
        pushButton_5 = new QPushButton(ManageTasks);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(770, 30, 71, 71));
        lineEdit = new QLineEdit(ManageTasks);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 30, 501, 71));

        retranslateUi(ManageTasks);

        QMetaObject::connectSlotsByName(ManageTasks);
    } // setupUi

    void retranslateUi(QDialog *ManageTasks)
    {
        ManageTasks->setWindowTitle(QApplication::translate("ManageTasks", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("ManageTasks", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("ManageTasks", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("ManageTasks", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("ManageTasks", "PushButton", nullptr));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManageTasks: public Ui_ManageTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGETASKS_H
