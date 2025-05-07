#include "DataManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

const string dataManager::userFile = "users.txt";

dataManager::dataManager() {}

void dataManager::loadUsersFromFile() {
    ifstream file(userFile);
    if (!file.is_open()) {
        cerr << "Unable to open " << userFile << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        while (!line.empty() && isspace(line[0])) line.erase(0, 1);
        while (!line.empty() && isspace(line[line.size() - 1])) line.erase(line.size() - 1, 1);

        istringstream iss(line);
        string userID, mobileNumber, password, firstName, lastName, profileDescription, visibility;

        getline(iss, userID, ',');
        getline(iss, mobileNumber, ',');
        getline(iss, password, ',');
        getline(iss, firstName, ',');
        getline(iss, lastName, ',');
        getline(iss, profileDescription, ',');
        getline(iss, visibility, ',');

        bool isVisible = (visibility == "1");

        User u(userID, mobileNumber, password, firstName, lastName, profileDescription, isVisible);
        users.push_back(u);
    }

    file.close();
}
void dataManager::saveUsersToFile() {
    ofstream file(userFile);
    if (!file.is_open()) {
        cerr << "Unable to open " << userFile << " for writing." << endl;
        return;
    }

    for (const User& u : users) {
        file << u.userID << ","
             << u.mobileNumber << ","
             << u.password << ","
             << u.firstName << ","
             << u.lastName << ","
             << u.profileDescription << ","
             << (u.isVisible ? "1" : "0") << "\n";
    }

    file.close();
}
