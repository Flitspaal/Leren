#include "GoedkopeRobot.h"

#include "iostream"

GoedkopeRobot::GoedkopeRobot(float w) : prijs(w)
{
	std::cout << "Goedkope Robot" << std::endl;
}

GoedkopeRobot::~GoedkopeRobot()
{
}

void GoedkopeRobot::waarde() const
{
	std::cout << this->prijs << std::endl;
}

int GoedkopeRobot::lampje()
{
	if (lamp == 0) {
		lamp = 1;
		return lamp;
	} 
	if (lamp == 1) {
		lamp = 0;
		return lamp;
	}
	if (lamp >= 2 || lamp < 0) {
		lamp = 0;
		return lamp;
	}
	//else lamp = 0;
	
}

void GoedkopeRobot::setLampje(int s)
{
	lamp = s;
}
