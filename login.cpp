#include "login.h"
#include "ui_login.h"
#include "DataManager.h"
#include <QMessageBox>
#include "forgetpassword.h"
#include "createaccount.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->clickHere_lb->setText("<a href=\"#\">Click Here</a>");
    ui->clickHere_lb->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->clickHere_lb->setOpenExternalLinks(false);
    connect(ui->clickHere_lb, &QLabel::linkActivated, this, &Login::openForgetPassword);

    ui->createAccount_lb->setText("<a href=\"#\">Create Account</a>");
    ui->createAccount_lb->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->createAccount_lb->setOpenExternalLinks(false);
    connect(ui->createAccount_lb, &QLabel::linkActivated, this, &Login::openCreateAccount);

    // تحميل المستخدمين عند بداية التطبيق
    dataManagerInstance.loadUsersFromFile();
}

Login::~Login()
{
    delete ui;

    // حفظ البيانات عند غلق التطبيق
    dataManagerInstance.saveUsersToFile();
}

bool Login::checkCredentials(const std::string& mobileNumber, const std::string& password) {
    for (const User& u : dataManagerInstance.users) {
        if (u.mobileNumber == mobileNumber && u.password == password) {
            return true;
        }
    }
    return false;
}

void Login::openForgetPassword()
{
    ForgetPassword *fp = new ForgetPassword();
    fp->show();
}

void Login::openCreateAccount()
{
    CreateAccount *createAcc = new CreateAccount(&dataManagerInstance); // تمرير pointer
    createAcc->show();
}

void Login::on_loginButton_clicked() {
    std::string mobile = ui->mobileNumber_pt->toPlainText().toStdString();
    std::string password = ui->pass_pt->toPlainText().toStdString();

    if (checkCredentials(mobile, password)) {
        QMessageBox::information(this, "Login", "Login successful!");
    } else {
        QMessageBox::warning(this, "Login", "Invalid username or password!");
    }
}
