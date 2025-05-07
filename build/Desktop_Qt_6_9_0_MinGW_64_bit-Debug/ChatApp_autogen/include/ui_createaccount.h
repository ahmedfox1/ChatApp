/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *createAccount_bt;
    QPlainTextEdit *firstName_tb;
    QPlainTextEdit *lastName_tb;
    QPlainTextEdit *phonNumber_tb;
    QPlainTextEdit *confirmPassword_tb;
    QPlainTextEdit *password_tb;
    QPlainTextEdit *bio_tb;

    void setupUi(QWidget *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName("CreateAccount");
        CreateAccount->resize(1280, 720);
        label = new QLabel(CreateAccount);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 80, 611, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cairo")});
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label_2 = new QLabel(CreateAccount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 180, 611, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cairo")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_2->setFont(font1);
        label_3 = new QLabel(CreateAccount);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(540, 180, 640, 71));
        label_3->setFont(font1);
        label_4 = new QLabel(CreateAccount);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(980, 180, 611, 71));
        label_4->setFont(font1);
        label_5 = new QLabel(CreateAccount);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 280, 611, 71));
        label_5->setFont(font1);
        label_6 = new QLabel(CreateAccount);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(540, 280, 611, 71));
        label_6->setFont(font1);
        label_7 = new QLabel(CreateAccount);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(980, 280, 611, 71));
        label_7->setFont(font1);
        createAccount_bt = new QPushButton(CreateAccount);
        createAccount_bt->setObjectName("createAccount_bt");
        createAccount_bt->setGeometry(QRect(550, 430, 151, 24));
        firstName_tb = new QPlainTextEdit(CreateAccount);
        firstName_tb->setObjectName("firstName_tb");
        firstName_tb->setGeometry(QRect(70, 230, 221, 31));
        lastName_tb = new QPlainTextEdit(CreateAccount);
        lastName_tb->setObjectName("lastName_tb");
        lastName_tb->setGeometry(QRect(540, 230, 221, 31));
        phonNumber_tb = new QPlainTextEdit(CreateAccount);
        phonNumber_tb->setObjectName("phonNumber_tb");
        phonNumber_tb->setGeometry(QRect(980, 230, 221, 31));
        confirmPassword_tb = new QPlainTextEdit(CreateAccount);
        confirmPassword_tb->setObjectName("confirmPassword_tb");
        confirmPassword_tb->setGeometry(QRect(540, 340, 221, 31));
        password_tb = new QPlainTextEdit(CreateAccount);
        password_tb->setObjectName("password_tb");
        password_tb->setGeometry(QRect(70, 340, 221, 31));
        bio_tb = new QPlainTextEdit(CreateAccount);
        bio_tb->setObjectName("bio_tb");
        bio_tb->setGeometry(QRect(980, 340, 221, 31));

        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QWidget *CreateAccount)
    {
        CreateAccount->setWindowTitle(QCoreApplication::translate("CreateAccount", "Form", nullptr));
        label->setText(QCoreApplication::translate("CreateAccount", "Create Account ", nullptr));
        label_2->setText(QCoreApplication::translate("CreateAccount", "First name", nullptr));
        label_3->setText(QCoreApplication::translate("CreateAccount", "Last name", nullptr));
        label_4->setText(QCoreApplication::translate("CreateAccount", "Phone number", nullptr));
        label_5->setText(QCoreApplication::translate("CreateAccount", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("CreateAccount", "Confirm Password", nullptr));
        label_7->setText(QCoreApplication::translate("CreateAccount", "Bio", nullptr));
        createAccount_bt->setText(QCoreApplication::translate("CreateAccount", "Create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
