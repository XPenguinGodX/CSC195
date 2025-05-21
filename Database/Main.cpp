#include <iostream>
#include "Database.h"
#include "User.h"
using namespace std;

int Main() {

	Database database;

	database.Create(User::eType::KOOLPENGUINACCOUNT);


}