#include "Point.h"

void ost::Point::Write(ostream& output)
{
	output << x << " : " << y << endl;
}

void ost::Point::Add(Point& point)
{
	x += point.x;
	y += point.y;

}

ost::Point ost::Point::operator-(ost::Point p2)
{
	return Point(x - p2.x, y - p2.y);
}

ost::Point operator * (ost::Point& p1 , ost::Point& p2)
{
	ost::Point p3;
	p3.x = p1.x * p2.x;
	p3.y = p1.x * p2.y;
	return p3;

}