//---------------------------------------------------------------
/**************************************
 * Functions for Console Applications *
 **************************************/
//---------------------------------------------------------------

#include "consoledef.h"

//---------------------------------------------------------------

/****************
 * 	Definition *
 ****************/


#define COL_INTENSITY 0x08a // 高輝度マスク
#define COL_RED_MASK 0x04 // 赤色ビット
#define COL_GREEN_MASK 0x02 // 緑色ビット
#define COL_BLUE_MASK 0x01 // 青色ビット

//---------------------------------------------------------------

/***************
 * 	Functions *
 ***************/


/**
 * sets color of text
 * @param col color of text
 */
void setColor (int col) {
  HANDLE hCons = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD attr = 0;
  if( col & COL_INTENSITY )
    attr |= FOREGROUND_INTENSITY;
  if( col & COL_RED_MASK )
    attr |= FOREGROUND_RED;
  if( col & COL_GREEN_MASK )
    attr |= FOREGROUND_GREEN;
  if( col & COL_BLUE_MASK )
    attr |= FOREGROUND_BLUE;
  SetConsoleTextAttribute( hCons, attr );
}

/**
 * sets color of text and background
 * @param fg color of font
 * @param bg color of background
 */
void setColor (int fg, int bg) {
  HANDLE hCons = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD attr = 0;
  if( fg & COL_INTENSITY )
    attr |= FOREGROUND_INTENSITY;
  if( fg & COL_RED_MASK )
    attr |= FOREGROUND_RED;
  if( fg & COL_GREEN_MASK )
    attr |= FOREGROUND_GREEN;
  if( fg & COL_BLUE_MASK )
    attr |= FOREGROUND_BLUE;

  if( bg & COL_INTENSITY )
    attr |= BACKGROUND_INTENSITY;
  if( bg & COL_RED_MASK )
    attr |= BACKGROUND_RED;
  if( bg & COL_GREEN_MASK )
    attr |= BACKGROUND_GREEN;
  if( bg & COL_BLUE_MASK )
    attr |= BACKGROUND_BLUE;
  SetConsoleTextAttribute(hCons, attr);
}

/**
 * sets cursor position in console
 * @param x x position
 * @param y y position
 */
void setPos(int x, int y) {
  HANDLE hCons = GetStdHandle( STD_OUTPUT_HANDLE );
  COORD pos;
  pos.X = x;
  pos.Y = y;
  SetConsoleCursorPosition(hCons, pos);
}

//---------------------------------------------------------------

/**************
 * Main(Demo) *
 **************/


/**************
 * For Colors *
 **************/

// int main(){
//   setColor(COL_WHITE); cout << "white\t";
//   setColor(COL_CYAN); cout << "cyan\t";
//   setColor(COL_YELLOW); cout << "yellow\t";
//   setColor(COL_VIOLET); cout << "violet\t";
//   setColor(COL_GREEN); cout << "green\t";
//   setColor(COL_RED); cout << "red\t";
//   setColor(COL_BLUE); cout << "blue\t";
//   cout << "\n";
//
//   setColor(COL_WHITE, COL_BLACK); cout << "BG: dark-blue\t";
//   setColor(COL_WHITE, COL_DARK_BLUE); cout << "white\t";
//   setColor(COL_CYAN, COL_DARK_BLUE); cout << "cyan\t";
//   setColor(COL_YELLOW, COL_DARK_BLUE); cout << "yellow\t";
//   setColor(COL_VIOLET, COL_DARK_BLUE); cout << "violet\t";
//   setColor(COL_GREEN, COL_DARK_BLUE); cout << "green\t";
//   setColor(COL_RED, COL_DARK_BLUE); cout << "red\t";
//   setColor(COL_BLUE, COL_DARK_BLUE); cout << "blue\t";
//   cout << "\n";
//   return 0;
// }

/***********
 * For Pos *
 ***********/

// int main() {
//   const int CONS_WD = 80;
//   const int CONS_HT = 25;
//   for (int i = 0; i < 100; i++) {
//     setPos(rand() % CONS_WD, rand() % CONS_HT);
//     cout << "*";
//   }
//   return 0;
// }
