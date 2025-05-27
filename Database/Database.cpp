#include "Database.h"
#include "KoolPenguinAccount.h"
#include "AdminAccount.h"

Database::~Database()
{
	for (User* user : m_users) {
		delete user;
	}
	m_users.clear();
}

void Database::Create(User::eType type)
{
	User* user = nullptr;

	switch (type)
	{
	case User::eType::KOOLPENGUINACCOUNT:
		user = new KoolPenguinAccount;
		break;
	case User::eType::ADMINACCOUNT:
		user = new AdminAccount;
		break;
	default:
		break;
	}

	user -> Read(cout, cin);

	m_users.push_back(user);
}

void Database::DisplayAll()
{
	for (User* user : m_users) {
		user->Write(cout);
	}

}

void Database::Display(const std::string& Username)
{
	for (User* user : m_users) {
		if (user->getUsername() == Username) {
			user->Write(cout);
		}
	}
}

void Database::Display(User::eType type){
	
	for (User* user : m_users) {
		if (user->GetType() == type) {
			user->Write(cout);
		}
	}

}
