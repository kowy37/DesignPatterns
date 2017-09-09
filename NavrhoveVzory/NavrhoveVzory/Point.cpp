#include "Point.h"


Point::Point(float x, float y) : Object()
{
	_x = x;
	_y = y;
}

Point::~Point()
{
}

std::ostream & operator<<(std::ostream & os, const Point & p)
{
	os << "[ " << p._x << " , " << p._y << " ]";
	return os;
}
