#include <iostream>
#include <list>
#include "DureRobot.h"
#include "GoedkopeRobot.h"
#include "Robot.h"

int main() {
  std::cout << "creating a robots" << std::endl;
  Robot R("Jhon");
  Robot RR(12, "Daan");
  Robot *F = new DureRobot(100000.0);  // alows polymorphism
  GoedkopeRobot *GG = new GoedkopeRobot(11.0);
  Robot* L = new DureRobot(200000.0, 2, 10);

  std::cout << std::endl << "Exceptions " << std::endl;
  L->setLocatie(1, 110);
  L->setLocatie(1, 10);
  L->giveName("Locatie");
  L->show();
  L->waarde();

  // Smart pointers
  std::cout << std::endl << "Smart Pointers: Unique " << std::endl;
  std::unique_ptr<Robot>U(new GoedkopeRobot(101.0));
  U->giveName("Bob");
  U->show();
  U->lampje();

  std::cout << "copy " << std::endl;
  Robot U1 = *U;
  U1.show();
  
  auto UU = std::make_unique<Robot>("Banana");
  UU->show();

  //shared
  std::cout << std::endl << "Smart Pointers: Shared " << std::endl;
  
  std::shared_ptr<Robot>S = std::make_shared<GoedkopeRobot>(101010.0);
  S->giveName("Jan");
  S->show();
  S->waarde();

  
  // pointers
  std::cout << std::endl << "Pointers " << std::endl;
  F->giveName("Sjaak");
  F->show();

  GG->giveName("GG");
  GG->show();
  std::cout << std::endl;

  F->waarde();
  GG->waarde();
  std::cout << std::endl;

  // check if G is pointing to a GoedkopeRobot, if so, cast it to GoedkopeRobot as a pointer that is const
  if (const auto robotCheck = dynamic_cast<GoedkopeRobot *>(GG)) {
    std::cout << "GG is pointing to a GoedkopeRobot" << std::endl;
    robotCheck->setLampje(1);
    for (int i = 0; i < 5; i++) {
        const int ii = robotCheck->lampje();
        std::cout << "status van lampje: " << ii << std::endl;
    }
  } else {
    std::cout << "is not pointing to a GoedkopeRobot" << std::endl;
  }

  std::cout << std::endl << "List " << std::endl;
  std::list <Robot> bots;
  bots.push_back(R);
  bots.push_back(RR);
  bots.push_back(*F);
  bots.push_back(*GG);

  std::list<Robot>::iterator i;
  for (i = bots.begin(); i != bots.end(); i++) {
      i->show();
  }

  std::cout << std::endl << "deleting pointers" << std::endl;
  delete F;
  delete GG;
  std::cout << std::endl << "deleting smart" << std::endl;
}