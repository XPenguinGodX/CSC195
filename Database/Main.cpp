#include <iostream>
#include "Database.h"
#include "User.h"
using namespace std;

int main() {

	Database database;

	database.Create(User::eType::KOOLPENGUINACCOUNT);

	return 1;

}