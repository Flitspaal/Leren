#include "Robot.h"

#include <iostream>
#include <string>
#include <utility>

Robot::Robot(std::string N) : name_(std::move(N)) { show(); }

Robot::Robot(const float P) : prijs_(P) { show(); }

Robot::Robot(const float P, std::string N) : prijs_(P), name_(std::move(N)) { show(); }

Robot::~Robot() { std::cout << "A robot has been deleted" << std::endl; }

void Robot::giveName(const std::string &N) { name_ = N; }

void Robot::show() const { std::cout << "my name is: " << name_ << std::endl; }

void Robot::waarde() const {}
