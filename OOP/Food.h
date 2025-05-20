#pragma once
#include <iostream>
using namespace std;

class Food
{
public:
	//Constructor
	//Allocating memory for datamembers
	//initializing data members with a default value
	//if i dont create one manually one is created for me 
	Food() {
		m_calories = 0;
	}

	Food(int calories) {
		m_calories = calories;
	}
	//Default Destructor
	//Deallocates memory
	~Food() {
	
	}

	virtual void consume() = 0; //Pure virtual function, Does not need a body

	int getCalories() {
		return m_calories;
	}

	void setCalories(int calories) {
		m_calories = calories;
	}

protected:
	int m_calories;
};
