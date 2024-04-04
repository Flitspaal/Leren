#ifndef DUREROBOT_H
#define DUREROBOT_H

#include "Robot.h"

class DureRobot : public Robot {
 public:
  explicit DureRobot(float);

  void waarde() const override;
};

#endif  // DUREROBOT_H
