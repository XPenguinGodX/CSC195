#pragma once
#include "Food.h"
class Vegetable :public Food
{
public:
	void consume() override;
protected:
	int lvlOfGrossness;
};

