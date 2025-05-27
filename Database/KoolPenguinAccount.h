#pragma once
#include "User.h"
class KoolPenguinAccount : public User
{
public:
	eType GetType() override;

	void Read(ostream& output, istream& input) override;
	void Write(ostream& output) override;


protected:

	int m_CoolnessLvl = 0;

};

