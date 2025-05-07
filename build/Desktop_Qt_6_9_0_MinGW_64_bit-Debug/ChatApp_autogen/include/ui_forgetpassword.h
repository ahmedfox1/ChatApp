/********************************************************************************
** Form generated from reading UI file 'forgetpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_H
#define UI_FORGETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *showpass_bt;
    QTextEdit *phoneNumber_tb;
    QTextEdit *firstName_tb;
    QTextEdit *lastName_tb;
    QLabel *yourPass_label;

    void setupUi(QWidget *ForgetPassword)
    {
        if (ForgetPassword->objectName().isEmpty())
            ForgetPassword->setObjectName("ForgetPassword");
        ForgetPassword->resize(400, 354);
        label = new QLabel(ForgetPassword);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 0, 271, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cairo")});
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);
        label_2 = new QLabel(ForgetPassword);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 271, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cairo")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_3 = new QLabel(ForgetPassword);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 150, 271, 71));
        label_3->setFont(font1);
        label_4 = new QLabel(ForgetPassword);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 70, 271, 71));
        label_4->setFont(font1);
        showpass_bt = new QPushButton(ForgetPassword);
        showpass_bt->setObjectName("showpass_bt");
        showpass_bt->setGeometry(QRect(140, 220, 121, 24));
        phoneNumber_tb = new QTextEdit(ForgetPassword);
        phoneNumber_tb->setObjectName("phoneNumber_tb");
        phoneNumber_tb->setGeometry(QRect(140, 90, 221, 31));
        firstName_tb = new QTextEdit(ForgetPassword);
        firstName_tb->setObjectName("firstName_tb");
        firstName_tb->setGeometry(QRect(140, 130, 221, 31));
        lastName_tb = new QTextEdit(ForgetPassword);
        lastName_tb->setObjectName("lastName_tb");
        lastName_tb->setGeometry(QRect(140, 170, 221, 31));
        yourPass_label = new QLabel(ForgetPassword);
        yourPass_label->setObjectName("yourPass_label");
        yourPass_label->setGeometry(QRect(10, 260, 381, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cairo")});
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setUnderline(false);
        yourPass_label->setFont(font2);

        retranslateUi(ForgetPassword);

        QMetaObject::connectSlotsByName(ForgetPassword);
    } // setupUi

    void retranslateUi(QWidget *ForgetPassword)
    {
        ForgetPassword->setWindowTitle(QCoreApplication::translate("ForgetPassword", "Form", nullptr));
        label->setText(QCoreApplication::translate("ForgetPassword", "Forget Password", nullptr));
        label_2->setText(QCoreApplication::translate("ForgetPassword", "First name", nullptr));
        label_3->setText(QCoreApplication::translate("ForgetPassword", "Last name", nullptr));
        label_4->setText(QCoreApplication::translate("ForgetPassword", "Phone number", nullptr));
        showpass_bt->setText(QCoreApplication::translate("ForgetPassword", "Show Password", nullptr));
        yourPass_label->setText(QCoreApplication::translate("ForgetPassword", "Your password is : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword: public Ui_ForgetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_H
