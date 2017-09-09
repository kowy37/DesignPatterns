#include "Object.h"
#include <algorithm>

Object::Object()
{
}


Object::~Object()
{
}

void Object::addObserver(Observer & o)
{
	if (! (std::find(std::begin(_observers), std::end(_observers), &o) == std::end(_observers))) {
		return;
	}
	_observers.push_back(&o);
}

void Object::removeObserver(const Observer & o)
{
	std::remove(std::begin(_observers), std::end(_observers), &o);
}

void Object::alertObserver()
{
	for (auto o : _observers) {
		o->refresh();
	}
}
