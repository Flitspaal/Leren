#ifndef ROBOT_H
#define ROBOT_H

#include "Positie.h"
#include <iostream>

class Robot
{
private:
    Positie positie;

public:

    Robot(Positie *);
    ~Robot();

    void run();
    void show();

};

#endif // !ROBOT_H
