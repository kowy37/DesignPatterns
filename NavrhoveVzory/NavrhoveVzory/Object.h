#pragma once
#include <vector>
#include "Observer.h"
class Object
{
public:
	Object();
	~Object();

	void addObserver(Observer& o);
	void removeObserver(const Observer& o);
	void alertObserver();
private:
	std::vector<Observer*> _observers;
};

