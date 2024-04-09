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

  virtual void giveName(const std::string &);
  virtual void show() const;
  virtual void waarde() const;
  virtual void setLampje() const {};
  virtual void lampje() const {};
  virtual void setLocatie(int,int) {};

 protected:
  float prijs_ = 0.0f;

 private:
  std::string name_;
};

#endif  // !ROBOT_H
