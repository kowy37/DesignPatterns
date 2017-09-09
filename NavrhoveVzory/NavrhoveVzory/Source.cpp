#include <iostream>
#include "Point.h"
#include "Line.h"
int main() {
	std::shared_ptr<Line> l = std::make_shared<Line>(Line());
	std::shared_ptr<Point> p1 = std::make_shared<Point>(Point(0.0f, 0.0f));
	std::shared_ptr<Point> p2 = std::make_shared<Point>(Point(1.0f, 1.0f));
	std::shared_ptr<Point> p3 = std::make_shared<Point>(Point(2.0f, 2.0f));
	std::shared_ptr<Point> p4 = std::make_shared<Point>(Point(3.0f, 3.0f));
	l->add(p1);
	l->print();
	l->add(p2);
	l->print();
	p2->set(0.0f, 1.0f);
	l->print();
	l->add(p3);
	l->print();
	l->add(p4);
	l->print();
	return 0;
}