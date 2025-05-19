#include <iostream>
#include "Food.h"
using namespace std;

int main() 
{
	Food food(50);

	food.consume();


	cout << food.getCalories() << endl;

	Food* pFood = &food;

	pFood->consume();

	(*pFood).consume();
	
}