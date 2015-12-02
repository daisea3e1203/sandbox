#include "consoledef.h"


Char::Char (int ix, int iy, char ic, int icolor) {
  x = ix;
  y = iy;
  c = ic;
  color = icolor;
}

void Char::move (int mx, int my) {
  x = x + mx;
  y = y + my;
  if (x < 0) x = 0;
  if (x >= 80) x = 79;
  if ( y < 0 ) y = 0;
  if ( y >= 25 ) y = 24;
}

void Char::draw() {
  setPos(x,y);
  setColor(color);
  cout << c;
}
