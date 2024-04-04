#ifndef POSITIE_H
#define POSITIE_H

#include <iostream>

class Positie {
 public:
  Positie();
  Positie(int, int);
  ~Positie();

  void movePosition(int, int);  // moves the position of the robot
  int geefXcoord();             // returns x
  int geefYcoord();             // returns y

 private:
  int x;  // x coord
  int y;  // y coord
};

#endif  // !POSITIE_H
