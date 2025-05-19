#pragma once

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

	void consume();

	int getCalories() {
		return m_calories;
	}

	void setCalories(int calories) {
		m_calories = calories;
	}

protected:
	int m_calories;
};
