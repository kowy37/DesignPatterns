#pragma once
#include "Observer.h"
#include "Point.h"
#include <vector>
#include <memory>

class Line :
	public Observer,  public std::enable_shared_from_this<Line>
{
public:
	Line();
	~Line();

	void add(std::shared_ptr<Point>& p);

	virtual void refresh() override;
	void print() const;
	void calcLength();
	
private:
	std::vector<std::shared_ptr<const Point>> _points;
	float _length;
};

