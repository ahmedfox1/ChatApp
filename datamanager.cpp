#include "DataManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

const string dataManager::userFile = "users.txt"; // تحديد ملف المستخدمين

dataManager::dataManager() {}

void dataManager::loadUsersFromFile() {
    users.clear();  // تفريغ البيانات السابقة
    std::ifstream file(userFile);
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, mobile, pass, fname, lname, description, visibility;
        std::getline(ss, id, ',');
        std::getline(ss, mobile, ',');
        std::getline(ss, pass, ',');
        std::getline(ss, fname, ',');
        std::getline(ss, lname, ',');
        std::getline(ss, description, ',');
        std::getline(ss, visibility);

        // تحويل قيم visibility إلى قيمة bool
        bool isVisible = (visibility == "true");

        users.emplace_back(id, mobile, pass, fname, lname, description, isVisible);
    }
}

void dataManager::saveUsersToFile() {
    std::ofstream file(userFile);
    for (const auto& user : users) {
        file << user.userID << ","
             << user.mobileNumber << ","
             << user.password << ","
             << user.firstName << ","
             << user.lastName << ","
             << user.profileDescription << ","
             << (user.isVisible ? "true" : "false") << "\n";
    }
}
