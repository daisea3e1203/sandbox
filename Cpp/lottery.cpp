#include <iostream>
using namespace std;

int main() {
  int n, m;

  cout << "�J�[�h�̖���=";
  cin >> n;
  cout << "�a�̒l=";
  cin >> m;
  int k[n];
  for (int i = 0; i < n; i++) {
    cout << i << "�Ԗڂ̃J�[�h�̒l��=";
    cin >> k[i];
  }

  bool f = false;

  for (int a = 0; a < n; a++) {
    for (int b = a; b < n; b++) {
      for (int c = b; c < n; c++) {
        for (int d = c; d < n; d++) {
          if (k[a] + k[b] + k[c] + k[d] == m) f = true;
        }
      }
    }
  }

  if(f) cout << "Yes";
  else cout << "No";

  return 0;
}
