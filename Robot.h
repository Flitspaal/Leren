#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
 public:
  Robot() = default;
  explicit Robot(std::string);
  explicit Robot(float);
  explicit Robot(float, std::string);
  virtual ~Robot();

  void giveName(const std::string &);
  void show() const;
  virtual void waarde() const;

 protected:
  float prijs_ = 0.0f;

 private:
  std::string name_;
};

#endif  // !ROBOT_H
