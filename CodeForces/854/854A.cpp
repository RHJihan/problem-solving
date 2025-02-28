// https://codeforces.com/contest/854/problem/A
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

  int n;
  cin >> n;

  for (int i = n / 2; i >= 1; i--) {
    int rest = n - i;
    if (gcd(i, rest) == 1) {
      cout << i << " " << rest << endl;
      break;
    }
  }

  return 0;
}