#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

#define COL_BLACK 0x00
#define COL_DARK_BLUE 0x01
#define COL_DARK_GREEN 0x02
#define COL_DARK_CYAN 0x03
#define COL_DARK_RED 0x04
#define COL_DARK_VIOLET 0x05
#define COL_DARK_YELLOW 0x06
#define COL_GRAY 0x07
#define COL_LIGHT_GRAY 0x08
#define COL_BLUE 0x09
#define COL_GREEN 0x0a
#define COL_CYAN 0x0b
#define COL_RED 0x0c
#define COL_VIOLET 0x0d
#define COL_YELLOW 0x0e
#define COL_WHITE 0x0f

void setColor (int col);
void setColor (int fg,int bg);
void setPos (int x, int y);

/*************************
 * Class and its methods *
 *************************/
//---------------------------------------------------------------

class KeyInput
{
private:
  //int KeyTbl[256];
  int KeyState[256];

public:
  KeyInput();
  int UpdateKey();
  int GetState (int key);
};

class Char
{
private:
  int x;
  int y;
  char c;
  int color;
public:
  Char(int ix, int iy, char ic, int color);
  void move (int mx, int my);
  void draw();
};
