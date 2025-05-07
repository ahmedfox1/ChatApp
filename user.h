#pragma once
#include <string>
#include <vector>

using namespace std;

class User {
public:
    string userID;          // User ID
    string mobileNumber;    // Mobile number
    string password;        // Password
    string firstName;       // First name
    string lastName;        // Last name
    vector<string> chatRooms; // List of ChatRoom IDs this user is part of
    vector<string> contacts;  // List of contacts (other user IDs)
    vector<string> stories;   // List of story IDs or references
    string profileDescription;  // User's profile description
    string profilePhoto;       // Optional: User's profile photo path
    bool isVisible;            // Boolean to indicate if profile is visible to all or just contacts

    User(string id, string mobile, string pass, string fname, string lname,
         string description, bool visibility);
};
