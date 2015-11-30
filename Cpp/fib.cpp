#include <iostream>
using namespace std;

#define MAX_N 120
//�܂��
int fib (int n) {
  if ( n <= 1 ) return n;
  return fib(n-1) + fib(n-2);
}

//���I�v��@�^�C�v
int memo[MAX_N + 1];
int fib1 (int n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n-1) + fib(n-2);
}

int main() {
  int i;
  cout << "�t�B�{�i�b�`����:����: ";
  cin >> i;
  cout << "��" << i << "���ڂ� " << fib1(i) << endl;
  return 0;
}
