#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "DataManager.h" // Include the DataManager header file
#include "ui_login.h"

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();  // This is the slot for the login button click
    void openForgetPassword();
    void on_login_bt_clicked();
    void openCreateAccount();

private:
    Ui::Login *ui;
    dataManager dataManagerInstance;  // Instance of DataManager

    bool checkCredentials(const std::string& mobileNumber, const std::string& password);
};

#endif // LOGIN_H
