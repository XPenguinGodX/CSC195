#include "AdminAccount.h"

void AdminAccount::Read(ostream& output, istream& input)
{
	User::Read(output, input);

	output << "Enter Admin Level: ";
	input >> m_ClearanceLvl;

}

void AdminAccount::Write(ostream& output)
{
	User::Write(output); // Write username and password from base

	output << "Admin Level: " << m_ClearanceLvl << std::endl;
}

User::eType AdminAccount::GetType() {
	return User::eType::ADMINACCOUNT;
}
