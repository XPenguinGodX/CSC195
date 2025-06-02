#include <iostream>
#include "Point.h"
using namespace std;

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

void operator + (ost::Point& p1, ost::Point& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

void operator << (ostream& output, ost::Point& p) 
{
	output << "Here you go" << endl;
	output << p.x << " : " << p.y << endl;
}

//ost::Point operator - (ost::Point p1, ost::Point p2)
//{
//	ost::Point p3;
//	p3.x = p1.x - p2.x;
//	p3.y = p1.y - p2.y;
//	return p3;
//}


int main() 
{
	cout << "--Functions Overloads--" << endl;
	print(1);
	print(1.0f);
	print(true);

	cout << "--Operator Overloads--" << endl;

	ost::Point point1(10, 14);
	ost::Point point2(5, 8);

	
	//point1.Add(point2);
	point1 + point2;

	point1.Write(cout);
	point2.Write(cout);

	cout << point1;

}