#pragma once
#include <list>
#include <iostream>
#include "Observer.h"
class Subject
{
private: 
	std::list<Observer*> L;
protected: 
	virtual void notify();
public:
	virtual ~Subject() {};
	virtual void insert(Observer* s);
	virtual void remove(Observer* s);

};

