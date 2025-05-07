#include "user.h"

User::User(string id, string mobile, string pass, string fname, string lname,
           string description, bool visibility)
    : userID(id), mobileNumber(mobile), password(pass), firstName(fname),
    lastName(lname), profileDescription(description), isVisible(visibility)
{

}
