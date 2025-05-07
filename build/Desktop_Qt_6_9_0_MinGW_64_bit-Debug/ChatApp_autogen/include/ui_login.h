/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPlainTextEdit *mobileNumber_pt;
    QPlainTextEdit *pass_pt;
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginButton;
    QLabel *label_3;
    QLabel *createAccount_lb;
    QLabel *label_5;
    QLabel *clickHere_lb;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1280, 720);
        QFont font;
        font.setUnderline(false);
        font.setKerning(false);
        Login->setFont(font);
        mobileNumber_pt = new QPlainTextEdit(Login);
        mobileNumber_pt->setObjectName("mobileNumber_pt");
        mobileNumber_pt->setGeometry(QRect(530, 270, 231, 31));
        pass_pt = new QPlainTextEdit(Login);
        pass_pt->setObjectName("pass_pt");
        pass_pt->setGeometry(QRect(530, 340, 231, 31));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(530, 250, 141, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cairo")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setKerning(false);
        label->setFont(font1);
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 320, 71, 16));
        label_2->setFont(font1);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(600, 410, 80, 24));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 440, 301, 16));
        label_3->setFont(font1);
        createAccount_lb = new QLabel(Login);
        createAccount_lb->setObjectName("createAccount_lb");
        createAccount_lb->setGeometry(QRect(590, 460, 301, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cairo")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setKerning(false);
        createAccount_lb->setFont(font2);
        createAccount_lb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_5 = new QLabel(Login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 380, 301, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cairo")});
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setKerning(false);
        label_5->setFont(font3);
        clickHere_lb = new QLabel(Login);
        clickHere_lb->setObjectName("clickHere_lb");
        clickHere_lb->setGeometry(QRect(650, 380, 301, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cairo")});
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setUnderline(true);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        clickHere_lb->setFont(font4);
        clickHere_lb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_7 = new QLabel(Login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(530, 50, 301, 81));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cairo")});
        font5.setPointSize(60);
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setKerning(false);
        label_7->setFont(font5);
        label_8 = new QLabel(Login);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(610, 190, 71, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Cairo")});
        font6.setPointSize(20);
        font6.setBold(false);
        font6.setUnderline(false);
        font6.setKerning(false);
        label_8->setFont(font6);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Mobile Number", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Dont have an account ?", nullptr));
        createAccount_lb->setText(QCoreApplication::translate("Login", "Create account", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "Forget your password ?", nullptr));
        clickHere_lb->setText(QCoreApplication::translate("Login", "Click here ", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "Chat x ", nullptr));
        label_8->setText(QCoreApplication::translate("Login", "Login ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
