#ifndef FORGETPASSWORD_H
#define FORGETPASSWORD_H

#include <QWidget>
#include "DataManager.h"

namespace Ui {
class ForgetPassword;
}

class ForgetPassword : public QWidget
{
    Q_OBJECT

public:
    explicit ForgetPassword(QWidget *parent = nullptr);
    ~ForgetPassword();

private slots:
    void on_showpass_bt_clicked();

private:
    Ui::ForgetPassword *ui;
    dataManager dataManagerInstance;
};

#endif // FORGETPASSWORD_H
