#include "KoolPenguinAccount.h"

void KoolPenguinAccount::Read(ostream& output, istream& input)
{
	User::Read(output, input);

	output << "Enter Your Level Of Coolness: ";
	input >> m_CoolnessLvl;
}

void KoolPenguinAccount::Write(ostream& output)
{
	User::Write(output);

	output << "Level of Coolness: " << m_CoolnessLvl << endl;
}
