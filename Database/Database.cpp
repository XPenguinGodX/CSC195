#include "Database.h"
#include "KoolPenguinAccount.h"
#include "AdminAccount.h"

Database::~Database()
{
}

void Database::Create(User::eType type)
{
	User* user = nullptr;

	switch (type
)
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

}

void Database::Display(const std::string& Username)
{
}

void Database::Display(User::eType type)
{
}
