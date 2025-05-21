#include "User.h"

void User::Read(ostream& output, istream& input)
{
	output << "Enter Username";
	input >> m_Username;

	output << "Enter Password";
	input >> m_Password;

}

void User::Write(ostream& output)
{
	output << "Username: " << m_Username << endl;
	output << "Password: " << m_Password << endl;

}
