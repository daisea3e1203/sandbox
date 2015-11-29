#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      for (int k = j+1; k < n; k++) {
        int len = a[i] + a[j] + a[k];
        int ma = max(a[i], max(a[k], a[j]));
        int rest = len - ma;

        if (ma < rest) {
          ans = max(ans, len);
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
