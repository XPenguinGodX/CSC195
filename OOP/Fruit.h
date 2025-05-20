#pragma once
#include "Food.h"
class Fruit : public Food
{
public:
	void consume() override;
	Fruit() {
		numOfSeeds = 0;
	}

protected:
	int numOfSeeds;
};

