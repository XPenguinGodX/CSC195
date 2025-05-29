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
