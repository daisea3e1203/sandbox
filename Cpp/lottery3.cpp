#include <iostream>
#include <algorithm>
using namespace std;
bool binary_search(int x, int n, int kk[]) {
  int l = 0, r = n * n;

  while (r - l >= 1) {
    int i = (l + r) / 2;
    if (kk[i] == x) return true;
    else if (kk[i] < x) l = i + 1;
    else r = i;
  }
}

int main() {
  int n, m;

  cout << "カードの枚数=";
  cin >> n;
  cout << "和の値=";
  cin >> m;
  int k[n];
  for (int i = 0; i < n; i++) {
    cout << i << "番目のカードの値は=";
    cin >> k[i];
  }

  int kk[n*n];

  //k[c] + k[d] の取りうる値を列挙
  for (int c = 0; c < n; c++) {
    for (int d = 0; d < n; d++) {
      kk[c * n + d] = k[c] + k[d];
    }
  }

  //二分探索を行うためにソート
  sort(kk, kk + n*n);

  bool f = false;
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      if (binary_search(m - k[a] - k[b], n, kk)) f = true;
    }
  }

  if (f) cout << "Yes";
  else cout << "No";
}
