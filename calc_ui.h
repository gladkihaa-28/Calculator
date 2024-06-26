/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CALC_UI_H
#define CALC_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QPushButton *button_rp;
    QPushButton *button_lp;
    QPushButton *button_c;
    QPushButton *button_div;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_8;
    QPushButton *button_mul;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *button_5;
    QPushButton *button_min;
    QPushButton *button_1;
    QPushButton *button_3;
    QPushButton *button_2;
    QPushButton *button_plus;
    QPushButton *button_ass;
    QPushButton *button_0;
    QPushButton *button_point;
    QTextEdit *textEdit;

    void setupUi(QDialog *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(437, 655);
        button_rp = new QPushButton(Calculator);
        button_rp->setObjectName(QString::fromUtf8("button_rp"));
        button_rp->setGeometry(QRect(231, 161, 81, 71));
        button_rp->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_lp = new QPushButton(Calculator);
        button_lp->setObjectName(QString::fromUtf8("button_lp"));
        button_lp->setGeometry(QRect(121, 161, 81, 71));
        button_lp->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_c = new QPushButton(Calculator);
        button_c->setObjectName(QString::fromUtf8("button_c"));
        button_c->setGeometry(QRect(11, 161, 81, 71));
        button_c->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_div = new QPushButton(Calculator);
        button_div->setObjectName(QString::fromUtf8("button_div"));
        button_div->setGeometry(QRect(340, 460, 81, 71));
        button_div->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_7 = new QPushButton(Calculator);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setGeometry(QRect(11, 261, 81, 71));
        button_7->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_9 = new QPushButton(Calculator);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setGeometry(QRect(231, 261, 81, 71));
        button_9->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_8 = new QPushButton(Calculator);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setGeometry(QRect(121, 261, 81, 71));
        button_8->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_mul = new QPushButton(Calculator);
        button_mul->setObjectName(QString::fromUtf8("button_mul"));
        button_mul->setGeometry(QRect(340, 360, 81, 71));
        button_mul->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_4 = new QPushButton(Calculator);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setGeometry(QRect(11, 361, 81, 71));
        button_4->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_6 = new QPushButton(Calculator);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setGeometry(QRect(231, 361, 81, 71));
        button_6->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_5 = new QPushButton(Calculator);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setGeometry(QRect(121, 361, 81, 71));
        button_5->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_min = new QPushButton(Calculator);
        button_min->setObjectName(QString::fromUtf8("button_min"));
        button_min->setGeometry(QRect(340, 260, 81, 71));
        button_min->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_1 = new QPushButton(Calculator);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setGeometry(QRect(11, 461, 81, 71));
        button_1->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_3 = new QPushButton(Calculator);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setGeometry(QRect(231, 461, 81, 71));
        button_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_2 = new QPushButton(Calculator);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setGeometry(QRect(121, 461, 81, 71));
        button_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_plus = new QPushButton(Calculator);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        button_plus->setGeometry(QRect(340, 160, 81, 71));
        button_plus->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        button_ass = new QPushButton(Calculator);
        button_ass->setObjectName(QString::fromUtf8("button_ass"));
        button_ass->setGeometry(QRect(230, 550, 191, 81));
        button_ass->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"background-color: rgb(255, 100, 0);\n"
"font-size: 20px;"));
        button_0 = new QPushButton(Calculator);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setGeometry(QRect(11, 561, 81, 71));
        button_0->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 170, 170);\n"
"color: white;\n"
"font-size: 20px;"));
        button_point = new QPushButton(Calculator);
        button_point->setObjectName(QString::fromUtf8("button_point"));
        button_point->setGeometry(QRect(121, 561, 81, 71));
        button_point->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(210, 210, 210);\n"
"color: black;\n"
"font-size: 20px;"));
        textEdit = new QTextEdit(Calculator);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 411, 101));
        textEdit->setStyleSheet(QString::fromUtf8("font-size: 20px;"));

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Dialog", nullptr));
        button_rp->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        button_lp->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        button_c->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        button_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        button_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        button_min->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        button_plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        button_ass->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        button_point->setText(QCoreApplication::translate("Calculator", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALC_UI_H
