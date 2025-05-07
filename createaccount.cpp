#include "createaccount.h"
#include "ui_createaccount.h"
#include <QMessageBox>

CreateAccount::CreateAccount(dataManager* manager, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CreateAccount)
    , dataManagerInstance(manager)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::on_createAccount_bt_clicked()
{
    QString firstName = ui->firstName_tb->toPlainText();
    QString lastName = ui->lastName_tb->toPlainText();
    QString phone = ui->phonNumber_tb->toPlainText();
    QString password = ui->password_tb->toPlainText();
    QString confirmPassword = ui->confirmPassword_tb->toPlainText();
    QString bio = ui->bio_tb->toPlainText();

    if (firstName.isEmpty() || lastName.isEmpty() || phone.isEmpty() ||
        password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Missing Info", "Please fill in all required fields.");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match.");
        return;
    }

    // إنشاء ID جديد (بسيط جدًا، ممكن تعدله)
    QString userID = QString::number(dataManagerInstance->users.size() + 1);

    // إضافة المستخدم الجديد
    User newUser(
        userID.toStdString(),
        phone.toStdString(),
        password.toStdString(),
        firstName.toStdString(),
        lastName.toStdString(),
        bio.toStdString(),
        true
        );

    dataManagerInstance->users.push_back(newUser);  // الإضافة داخل الذاكرة فقط

    QMessageBox::information(this, "Account Created", "Your account has been created successfully!");

    this->close();  // إغلاق النافذة
}
