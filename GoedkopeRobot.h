#ifndef GOEDKOPEROBOT_H
#define GOEDKOPEROBOT_H

#include "Robot.h"

class GoedkopeRobot : public Robot
{
private:
	float prijs;
	int lamp;
public:
	GoedkopeRobot(float);
	~GoedkopeRobot();

	void waarde() const;
	int lampje();

};

#endif //GOEDKOPEROBOT_H