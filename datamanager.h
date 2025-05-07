#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <vector>
#include <string>
#include "user.h"

using namespace std;

class dataManager {
public:
    dataManager();

    void loadUsersFromFile();
    void saveUsersToFile();

    vector<User> users;

private:
    static const string userFile;  // إعلان فقط هنا
};

#endif // DATAMANAGER_H
