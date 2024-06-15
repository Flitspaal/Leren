#pragma once
class Switchable
{
public:
	virtual ~Switchable() {};
	virtual bool isOn() const = 0;
	virtual void turnOff() = 0;
	virtual void turnOn() = 0;
};

