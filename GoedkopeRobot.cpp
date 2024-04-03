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
	lamp = 1;
	if (lamp == 0) {
		lamp = 1;
	} 
	if (lamp == 1) {
		lamp = 0;
	}
	else lamp = 0;
	return lamp;
}
