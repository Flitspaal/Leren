#ifndef DUREROBOT_H
#define DUREROBOT_H

#include "Robot.h"

class DureRobot : public Robot
{
private:
	float prijs;
public:
	DureRobot(float); 
	~DureRobot();

	void waarde() const;
};

#endif //DUREROBOT_H