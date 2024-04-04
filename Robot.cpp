#include "Robot.h"

#include <iostream>

Robot::Robot(std::string N) : name_(N) { show(); }

Robot::Robot(float P) : prijs_(P) { show(); }

Robot::Robot(float P, std::string N) : prijs_(P), name_(N) { show(); }

Robot::~Robot() { std::cout << "A robot has been deleted" << std::endl; }

void Robot::giveName(std::string N) { name_ = N; }

void Robot::show() const { std::cout << "my name is: " << name_ << std::endl; }

void Robot::waarde() const {}

void Robot::setLampje(int t) const {}
