
#include <iostream>

#include "Robot.h"
#include "DureRobot.h"
#include "GoedkopeRobot.h"

#include "iostream"

int main() {
	std::cout << "creating a robot" << std::endl;
	Robot R("Jhon");
	Robot *F = new DureRobot(100000); //alows polymorphism
	DureRobot *FF = new DureRobot(100001);
	Robot *G = new GoedkopeRobot(10);
	GoedkopeRobot* GG = new GoedkopeRobot(11);
	
	std::cout << std::endl;

	// pointers
	

	F->show();
	F->giveName("Sjaak");

	G->giveName("Henk");

	F->show();
	G->show();
	std::cout << std::endl;

	F->waarde();
	FF->waarde();
	G->waarde();
	GG->waarde();
	std::cout << std::endl;

	G->setLampje(1);

	//dynamic cast:
	GoedkopeRobot* robotCheck = dynamic_cast<GoedkopeRobot*>(G); //you dont have to delete this.
	if (robotCheck) {
		std::cout << "G is pointing to a GoedkopeRobot" << std::endl;
		robotCheck->setLampje(1);
		std::cout << robotCheck->lampje() << std::endl; // Access specific functionality of GoedkopeRobot
	}
	else {
		std::cout << "is not pointing to a GoedkopeRobot" << std::endl;
		
	}
	std::cout << std::endl;

	GG->setLampje(1);
	for (int i = 0; i < 5; i++) {
		int ii = GG->lampje();
		std::cout << "status van lampje: " << ii << std::endl;
	}
	
	std::cout << std::endl;

	// deleting pointers
	delete F;
	delete FF;
	delete G;
	delete GG;
}