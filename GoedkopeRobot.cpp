#include "GoedkopeRobot.h"

#include <iostream>

GoedkopeRobot::GoedkopeRobot(const float w) : Robot(w), lamp_(0) {
  std::cout << "Goedkope Robot" << std::endl;
}

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
