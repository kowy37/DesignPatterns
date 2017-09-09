#include "Object.h"
#include <algorithm>

Object::Object()
{
}


Object::~Object()
{
}

void Object::addObserver(std::weak_ptr<Observer> o)
{
	
	_observers.push_back(o);
}

void Object::removeObserver(const std::weak_ptr<Observer> o)
{
	
}

void Object::alertObserver()
{
	for (auto o : _observers) {
		auto p = o.lock();
		if(p)
			p->refresh();
	
	}
}
