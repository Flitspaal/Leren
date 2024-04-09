#include "DureRobot.h"
#include "Exeptions.h"

#include <iostream>
#include <utility>

DureRobot::DureRobot(float p) : Robot(p) { std::cout << "Dure Robot" << std::endl; }

DureRobot::DureRobot(float p, int a, int b): Robot(p) { setLocatie(a, b); }

void DureRobot::waarde() const { std::cout << prijs_ << std::endl; }

void DureRobot::setLocatie(int a, int b) {
	std::pair<int, int> coords;
	coords.first = a;
	coords.second = b;
	try {
		if (a >= 0 && a <= 10)
			coords_.first = a;
		else {
			throw Exeptions(coords);
		}
		if (b >= 0 && b <= 10)
			coords_.second = b;
		else {
			throw Exeptions(coords);
		}
	} catch (Exeptions& e) { std::cerr << e.locatie_fout() << std::endl; }
}