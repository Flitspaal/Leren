#include "DureRobot.h"

#include <iostream>

DureRobot::DureRobot(float p) : Robot(p) {
	std::cout << "DureRobot" << std::endl;
}

DureRobot::~DureRobot() {}

void DureRobot::waarde() const { std::cout << prijs_ << std::endl; }