#include <iostream>
using namespace std;

#define MAX_N 120
//まんま
int fib (int n) {
  if ( n <= 1 ) return n;
  return fib(n-1) + fib(n-2);
}

//動的計画法タイプ
int memo[MAX_N + 1];
int fib1 (int n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n-1) + fib(n-2);
}

int main() {
  int i;
  cout << "フィボナッチ数列:項数: ";
  cin >> i;
  cout << "第" << i << "項目は " << fib1(i) << endl;
  return 0;
}
