#include "forgetpassword.h"
#include "ui_forgetpassword.h"
#include <QString>

ForgetPassword::ForgetPassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForgetPassword)
{
    ui->setupUi(this);
    dataManagerInstance.loadUsersFromFile();  // تحميل المستخدمين من الملف
}

ForgetPassword::~ForgetPassword()
{
    delete ui;
}

void ForgetPassword::on_showpass_bt_clicked()
{
    std::string phone = ui->phoneNumber_tb->toPlainText().toStdString();
    std::string first = ui->firstName_tb->toPlainText().toStdString();
    std::string last = ui->lastName_tb->toPlainText().toStdString();

    for (const User& u : dataManagerInstance.users) {
        if (u.mobileNumber == phone && u.firstName == first && u.lastName == last) {
            QString result = QString("Your password is: %1").arg(QString::fromStdString(u.password));
            ui->yourPass_label->setText(result);
            return;
        }
    }

    ui->yourPass_label->setText("User not found or incorrect information!");
}
