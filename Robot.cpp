#include "Robot.h"

#include "iostream"

//using namespace std;


Robot::Robot(std::string N) : rName(N) {
	show();
}

Robot::~Robot() {
	std::cout << "A robot has been deleted" << std::endl;
}

void Robot::giveName(std::string N) {
	rName = N;
}

void Robot::show() const
{
	std::cout << "my name is: " << this->rName << std::endl;
}

void Robot::waarde() const
{
}

void Robot::setLampje(int i)
{
}

