#pragma once
#include "User.h"
class AdminAccount :public User
{
public:
	eType GetType() override { return eType::ADMINACCOUNT; }

	void Read(ostream& output, istream& input) override;
	void Write(ostream& output) override;
};

