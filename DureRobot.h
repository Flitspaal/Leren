#ifndef DUREROBOT_H
#define DUREROBOT_H

#include "Robot.h"

class DureRobot : public Robot {
public:
	explicit DureRobot(float);
	~DureRobot();

	void waarde() const;
};

#endif  // DUREROBOT_H