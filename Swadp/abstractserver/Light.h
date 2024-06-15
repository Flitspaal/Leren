#pragma once
#include "Switchable.h"
class Light : public Switchable
{
private:
	bool on;
public:
	Light(bool o) : on(o) {};
	virtual bool isOn() const;
	virtual void turnOff();
	virtual void turnOn();
};

