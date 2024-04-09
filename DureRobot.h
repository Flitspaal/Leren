#ifndef DUREROBOT_H
#define DUREROBOT_H

#include <utility>
#include "Robot.h"

class DureRobot : public Robot {
 private:
	 std::pair<int, int> coords_;
 public:
  explicit DureRobot(float);
  explicit DureRobot(float, int, int);

  void waarde() const override;
  void setLocatie(int,int);
};

#endif  // DUREROBOT_H
