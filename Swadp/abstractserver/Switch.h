#pragma once
#include "Switchable.h"
#include "Light.h"

class Switch
{
private:
	Switchable* L;
public:
	Switch(Switchable* l) : L(l) {};
	virtual ~Switch();
	virtual void press();
};

