#pragma once
#include "Food.h"
class Meat :public Food
{
public:
	void consume() override;
protected:
	bool isCooked;
};

