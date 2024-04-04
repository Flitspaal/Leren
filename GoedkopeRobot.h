#ifndef GOEDKOPEROBOT_H
#define GOEDKOPEROBOT_H

#include "Robot.h"

class GoedkopeRobot : public Robot {
 public:
  explicit GoedkopeRobot(float);
  ~GoedkopeRobot();

  void waarde() const;
  int lampje();
  void setLampje(int);

 private:
  int lamp_;
};

#endif  // GOEDKOPEROBOT_H