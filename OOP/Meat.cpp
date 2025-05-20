#include "Meat.h"

void Meat::consume()
{
	if (isCooked)
		cout << "Yummy Yummy" << endl;
	else
		cout << "ugh!" << endl;
}
