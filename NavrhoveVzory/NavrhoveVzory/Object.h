#pragma once
#include <vector>
#include <memory>
#include "Observer.h"
class Object
{
public:
	Object();
	~Object();

	void addObserver(std::weak_ptr<Observer> o);
	void removeObserver(const std::weak_ptr<Observer> o);
	void alertObserver();
private:
	std::vector<std::weak_ptr<Observer>> _observers;
};

