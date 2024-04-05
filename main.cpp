#include <iostream>

#include "DureRobot.h"
#include "GoedkopeRobot.h"
#include "Robot.h"

int main() {
  std::cout << "creating a robots" << std::endl;
  Robot R("Jhon");
  Robot RR(12, "Daan");
  Robot *F = new DureRobot(100000);  // alows polymorphism
  DureRobot *FF = new DureRobot(100001);
  Robot *G = new GoedkopeRobot(10);
  GoedkopeRobot *GG = new GoedkopeRobot(11);
  

  std::cout << std::endl;
  std::cout << "Smart Pointers " << std::endl;
  // Smart pointers
  std::unique_ptr<Robot>U(new GoedkopeRobot(10101)); // geen delete nodig
  U->giveName("Bob");
  U->show();

  std::cout << "copy " << std::endl;
  Robot U1 = *U;
  U1.show();
  
  auto UU = std::make_unique<Robot>("Banana");
  UU->show();

  // pointers
  std::cout << "Pointers " << std::endl;
  F->show();
  F->giveName("Sjaak");

  G->giveName("Henk");

  F->show();
  G->show();

  FF->giveName("FF");
  FF->show();

  GG->giveName("GG");
  GG->show();
  std::cout << std::endl;

  F->waarde();
  FF->waarde();
  G->waarde();
  GG->waarde();
  std::cout << std::endl;

  // check if G is pointing to a GoedkopeRobot, if so, cast it to GoedkopeRobot as a pointer that is const
  if (const auto robotCheck = dynamic_cast<GoedkopeRobot *>(G)) {
    std::cout << "G is pointing to a GoedkopeRobot" << std::endl;
    robotCheck->setLampje(1);
    std::cout << robotCheck->lampje() << std::endl; // Access specific functionality of GoedkopeRobot
  } else {
    std::cout << "is not pointing to a GoedkopeRobot" << std::endl;
  }
  std::cout << std::endl;

  GG->setLampje(1);
  for (int i = 0; i < 5; i++) {
    const int ii = GG->lampje();
    std::cout << "status van lampje: " << ii << std::endl;
  }

  std::cout << std::endl;

  // deleting pointers
  delete F;
  delete FF;
  delete G;
  delete GG;
}
