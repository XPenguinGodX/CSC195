#include <iostream>
#include "Food.h"
#include "Fruit.h"
#include "Vegetable.h"
#include "Meat.h"
#include <vector>
using namespace std;

int main()
{
	/*Food food(50);

	food.consume();


	cout << food.getCalories() << endl;

	Food* pFood = &food;

	pFood->consume();

	(*pFood).consume();*/


	cout << "fruit instance" << endl;
	Fruit apple;
	apple.consume();
	cout << "Fruit Calories: " << apple.getCalories() << endl;


	cout << "My Vegetable" << endl;
	Vegetable GreenPepper;
	cout << "EAT Green Pepper: " << endl;
	GreenPepper.consume();

	Meat chicken;
	cout << "This chicken is " << endl;
	chicken.consume();

	vector<Food*> foodlist = {&apple, &chicken, &GreenPepper };

}