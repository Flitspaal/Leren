#include "DureRobot.h"

#include <iostream>

DureRobot::DureRobot(float p) : Robot(p) {
  std::cout << "Dure Robot" << std::endl;
}

void DureRobot::waarde() const { std::cout << prijs_ << std::endl; }
