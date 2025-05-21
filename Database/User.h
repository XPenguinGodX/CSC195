#pragma once
#include <iostream>
using namespace std;

class User
{
public:
	enum class eType
	{
		KOOLPENGUINACCOUNT = 1,
		ADMINACCOUNT
	};

	string getUsername() { return m_Username; }
	virtual eType GetType() = 0;

	virtual void Read(ostream& output, istream& input);
	virtual void Write(ostream& output);

protected:
	string m_Username;
	string m_Password;
	


};

