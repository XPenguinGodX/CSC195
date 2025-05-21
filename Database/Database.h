#pragma once
#include "User.h"
#include <vector>
using namespace std;

class Database
{
public:
	~Database(); // Destructor
	void Create(User::eType type);
	void DisplayAll();
	void Display(const std::string& Username);
	void Display(User::eType type);


private:
	vector<User*> m_users;
};

