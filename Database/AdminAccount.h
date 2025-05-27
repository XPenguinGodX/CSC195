#pragma once
#include "User.h"
class AdminAccount :public User
{
public:
	eType GetType() override;

	void Read(ostream& output, istream& input) override;
	void Write(ostream& output) override;


private:
	int m_ClearanceLvl = 0;
};



