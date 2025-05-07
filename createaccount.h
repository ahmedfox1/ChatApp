#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include <QWidget>
#include "DataManager.h"

namespace Ui {
class CreateAccount;
}

class CreateAccount : public QWidget
{
    Q_OBJECT

public:
    explicit CreateAccount(dataManager* manager, QWidget *parent = nullptr);
    ~CreateAccount();

private slots:
    void on_createAccount_bt_clicked();

private:
    Ui::CreateAccount *ui;
    dataManager* dataManagerInstance;  // بوينتر على الذاكرة الأصلية
};

#endif // CREATEACCOUNT_H
