#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
 public:
  Robot();
  explicit Robot(std::string);
  explicit Robot(float);
  explicit Robot(float, std::string);
  ~Robot();

  void giveName(std::string);
  void show() const;
  virtual void waarde() const;

 protected:
  float prijs_;

 private:
  std::string name_;
};

#endif  // !ROBOT_H
