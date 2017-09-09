#include <iostream>
#include "Point.h"
#include "Line.h"
int main() {
	Line l;
	Point* p1 = new  Point(0.0f, 0.0f);
	Point* p2 = new  Point(1.0f, 1.0f);
	Point* p3 = new  Point(2.0f, 2.0f);
	Point* p4 = new  Point(3.0f, 3.0f);
	l.add(*p1);
	l.print();
	l.add(*p2);
	l.print();
	p2->set(0.0f, 1.0f);
	l.print();
	l.add(*p3);
	l.print();
	l.add(*p4);
	l.print();
	return 0;
}