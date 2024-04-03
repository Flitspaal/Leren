#ifndef ROBOT_H
#define ROBOT_H


#include <string>

class Robot
{
private:
    std::string rName;

public:
    Robot() {};
    Robot(std::string);
    ~Robot();

    void giveName(std::string);
    void show() const;
    virtual void waarde() const;

};

#endif // !ROBOT_H