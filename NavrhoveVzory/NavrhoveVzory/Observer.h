#pragma once
class Observer
{
public:
	Observer();
	virtual ~Observer();

	virtual void refresh() = 0;
};

