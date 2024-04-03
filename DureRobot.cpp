#include "DureRobot.h"

#include "iostream"

DureRobot::DureRobot(float p) : prijs(p)
{
	std::cout << "DureRobot" << std::endl;
}

DureRobot::~DureRobot()
{
}

void DureRobot::waarde() const
{
	std::cout << this->prijs << std::endl;
}
