#include "Positie.h"

Positie::Positie(int Xcoord, int Ycoord) : x(Xcoord), y(Ycoord) {}

Positie::~Positie() {}

void Positie::movePosition(int Xcoord, int Ycoord) {
  x = Xcoord;
  y = Ycoord;
}

int Positie::geefXcoord() { return x; }

int Positie::geefYcoord() { return y; }
