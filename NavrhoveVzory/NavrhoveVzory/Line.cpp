#include "Line.h"
#include <iostream>


Line::Line()
{
	_length = 0;
}


Line::~Line()
{
}

void Line::add(std::shared_ptr<Point>& p)
{
	if (! _points.empty()) {
		auto last = std::rbegin(_points);
		_length += p->getDistanceFrom(**last);
	}

	_points.push_back(p);
	//std::weak_ptr<Line> param = shared_from_this();
	p->addObserver(shared_from_this());
}

void Line::refresh()
{
	calcLength();
}

void Line::print() const
{
	std::cout << "LINE: ";
	for (auto p : _points) {
		std::cout << *p << ", ";
	}
	std::cout << "  LENGTH: " << _length;
	std::cout << std::endl;
}

void Line::calcLength()
{
	auto tempL = std::begin(_points);
	auto tempR = tempL + 1;
	_length = 0.0f;
	while (tempR != std::end(_points)) {
		_length += (*tempL)->getDistanceFrom(**tempR);
		tempL = tempR;
		tempR++;
	}
}
