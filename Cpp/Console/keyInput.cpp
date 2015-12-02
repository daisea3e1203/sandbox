//---------------------------------------------------------------
/*******************
 *    KeyInput     *
 *******************/
 //---------------------------------------------------------------

#include "consoledef.h"
// #include <iostream>
// #include <windows.h>
// #include <cstdlib>
// using namespace std;

KeyInput::KeyInput() {
  for (int i = 0; i < 256; i++) {
    KeyState[i] = 0;
  }
}

int KeyInput::UpdateKey() {
  for (int i = 0; i < 256; i++) {
    if (GetKeyState(i) & 0x8000) KeyState[i]++;
    else KeyState[i] = 0;
  }
}

int KeyInput::GetState (int key) {
  return KeyState[key];
}

  // GetKeyboardState(KeyTbl);
  // for (int i = 0; i < 256; i++) {
  //   if ( KeyTbl[i] & 0x8000 ) {
  //     KeyState[i] += 1;
  //   } else {
  //     KeyState[i] = 0;
  //   }
  // }
  // return 0;



//デモ
// int main() {
//   KeyInput Key;
//   while(1) {
//     Key.UpdateKey();
//     if( Key.GetState(VK_SPACE) >= 10 ) cout << "www" << endl;
//     if( Key.GetState(VK_LEFT) >= 30) break;
//     cout << "キーの値: " << Key.GetState(VK_SPACE) << endl;
//     if( GetKeyState('W') & 0x8000 ) break;
//     Sleep(100);
//   }
//   return 0;
// }
