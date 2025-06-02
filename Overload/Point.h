#pragma once
#include <iostream>
using namespace std;

namespace ost {

	class Point
	{
	public:
		float x, y;
		//Point() { x = 0; y = 0; }
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x{ x }, y{ y } {}

		void Write(ostream& output);
		void Add(Point& point);

		Point operator - (ost::Point p2);

		

	};

}

