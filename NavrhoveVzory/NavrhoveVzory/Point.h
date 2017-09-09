#pragma once
#include "Object.h"
#include <iostream>
class Point :
	public Object
{
public:
	explicit Point(float x, float y);
	~Point();

	Point get() const							{ return Point(_x, _y); }
	void set(float x, float y)					{ _x = x; _y = y; Object::alertObserver(); }
	float getDistanceFrom(const Point& p) const	{ return std::sqrt((_x - p._x)*(_x - p._x) + (_y - p._y)*(_y - p._y)); }

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
private:
	float _x;
	float _y;
};

