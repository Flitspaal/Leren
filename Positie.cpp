#include "Positie.h"

Positie::Positie(int Xcoord, int Ycoord) : x(Xcoord), y(Ycoord) {}

void Positie::movePosition(int Xcoord, int Ycoord) {
  x = Xcoord;
  y = Ycoord;
}

int Positie::geefXcoord() const { return x; }

int Positie::geefYcoord() const { return y; }
