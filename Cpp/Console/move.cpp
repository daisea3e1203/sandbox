//---------------------------------------------------------------
/**************
 *    Move    *
 **************/
//---------------------------------------------------------------
//#define GLOBAL_INSTANCE
#include "consoledef.h"

int main() {
  KeyInput Key;
  system("cls");
  Char c(45,12,'@',COL_BLUE);
  while(1) {
    Key.UpdateKey();
    //clear screen
    for (int i = 0; i < 80; i++) {
      for (int j = 0; j < 25; i++) {
        setPos(i,j);
        cout << " ";
      }
    }
    if(Key.GetState(VK_RIGHT) >= 1) c.move(1,0);
    if(Key.GetState(VK_LEFT) >= 1) c.move(-1,0);
    if(Key.GetState(VK_UP) >= 1) c.move(0,1);
    if(Key.GetState(VK_DOWN) >= 1) c.move(0,-1);
    c.draw();

    if(Key.GetState('Q') >= 3) break;
    Sleep(50);
  }
  system("cls");
  return 0;
}
