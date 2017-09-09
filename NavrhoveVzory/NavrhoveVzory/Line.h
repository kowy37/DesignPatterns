#pragma once
#include "Observer.h"
#include "Point.h"
#include <vector>
class Line :
	public Observer
{
public:
	Line();
	~Line();

	void add(Point& p);

	virtual void refresh() override;
	void print() const;
	void calcLength();
	void f() {}
private:
	std::vector<const Point*> _points;
	float _length;
};

