#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int x, int n, int k[]);

int main() {
  int n, m;

  cout << "カードの枚数は=";
  cin >> n;
  cout << "カードの和は=";
  cin >> m;
  int k[n];
  for (int i = 0; i < n; i++) {
    cout << i << "番目のカードは=";
    cin >> k[i];
  }

  sort(k, k+n);

  bool f = false;

  for (int a = 0; a <n; a++ ) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        if (binary_search(m - k[a] - k[b] - k[c], n, k)) f = true;
      }
    }
  }
  if (f) cout << "Yes";
  else cout << "No";
   return 0;
}

bool binary_search(int x, int n, int k[]) {
  //xの存在しうる範囲はk[l]..k[r-1]
  int l = 0, r = n;

  while (r-l >= 1) {
    int i = (l+r) / 2;
    if (k[i] == x) return true; //見つかった
    else if (k[i] < x) l = i+1;
    else r = i;
  }

  //見つからなかった
  return false;
}
