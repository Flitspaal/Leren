#ifndef GOEDKOPEROBOT_H
#define GOEDKOPEROBOT_H

#include "Robot.h"

class GoedkopeRobot : public Robot {
 public:
	explicit GoedkopeRobot(float);
	~GoedkopeRobot() {};

	virtual void waarde() const override;
	virtual int lampje();
	virtual void setLampje(int);

 private:
	int lamp_;
};

#endif  // GOEDKOPEROBOT_H
