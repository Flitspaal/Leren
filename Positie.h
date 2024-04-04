#ifndef POSITIE_H
#define POSITIE_H

class Positie {
 public:
  Positie() = default;
  Positie(int, int);
  ~Positie() = default;

  void movePosition(int, int);  // moves the position of the robot
  int geefXcoord() const;             // returns x
  int geefYcoord() const;             // returns y

 private:
  int x;  // x coord
  int y;  // y coord
};

#endif  // !POSITIE_H
