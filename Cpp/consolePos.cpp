#include <iostream>
#include <Windows.h>
using namespace std;

void setCursorPos(int x, int y) {
  HANDLE hCons = GetStdHandle( STD_OUTPUT_HANDLE );
  COORD pos;
  pos.X = x;
  pos.Y = y;
  SetConsoleCursorPosition(hCons, pos);
}
int main() {
  const int CONS_WD = 80;
  const int CONS_HT = 25;
  for (int i = 0; i < 100; i++) {
    setCursorPos(rand() % CONS_WD, rand() % CONS_HT);
    cout << "*";
  }
  return 0;
}
