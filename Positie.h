#ifndef POSITIE_H
#define POSITIE_H

#include <iostream>

class Positie {

private:
    int x; // x coord
    int y; // y coord

public:
    Positie();
    Positie(int,int);
    ~Positie();

    void move(int,int); // moves the position of the robot
    int geefXcoord(); // returns x
    int geefYcoord(); // returns y

};

#endif // !POSITIE_H