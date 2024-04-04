#include "GoedkopeRobot.h"

#include <iostream>

#include "Robot.h"

GoedkopeRobot::GoedkopeRobot(float w) : Robot(w) {
  std::cout << "Goedkope Robot" << std::endl;
}

GoedkopeRobot::~GoedkopeRobot() {}

void GoedkopeRobot::waarde() const { std::cout << prijs_ << std::endl; }

int GoedkopeRobot::lampje() {
  if (!lamp_) {
    lamp_ = 1;
  } else if (lamp_) {
    lamp_ = 0;
  }

  return lamp_;
}

void GoedkopeRobot::setLampje(int s) { lamp_ = s; }
