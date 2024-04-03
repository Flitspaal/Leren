#include "Robot.h"
#include "string.h"

using namespace std;

Robot::Robot(Positie *p): positie(*p) {    
}

Robot::~Robot() {
}

void Robot::run(){
    positie.move(10,5);
}

void Robot::show(){
    cout<<"De coordinaten zijn: X = " << (positie.geefXcoord()) << ", Y = " << (positie.geefYcoord()) << endl;
}

