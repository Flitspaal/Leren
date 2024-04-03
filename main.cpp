
#include <iostream>

#include "Robot.h"
#include "DureRobot.h"
#include "GoedkopeRobot.h"

#include "iostream"

int main()
{
	std::cout << "createing a robots" << std::endl;
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
	F->waarde();
	FF->waarde();
	G->waarde();

	GG->waarde();

	for (int i = 0; i < 5; i++) {
		int ii = GG->lampje();
		std::cout << "status van lampje: " << ii << std::endl;
	}

	std::cout << std::endl;

	// deleting pointers
	delete F;
	delete FF;
	delete G;
}