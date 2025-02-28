// https://atcoder.jp/contests/abc162/tasks/abc162_c
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  for (int i = min(a, b); i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      return i;
    }
  }
  return 1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int k;
  cin >> k;

  int sum = 0;

  for (int a = 1; a <= k; +a++) {
    for (int b = 1; b <= k; b++) {
      for (int c = 1; c <= k; c++) {
        sum += gcd(gcd(a, b), c);
      }
    }
  }

  cout << sum << endl;
  return 0;
}
