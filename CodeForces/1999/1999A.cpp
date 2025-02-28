// https://codeforces.com/contest/1999/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, digit, sum = 0;
    cin >>n;
    while (n > 0) {
      digit = n % 10;
      sum = sum + digit;
      n = n / 10;
    }
    cout << sum << '\n';
  }

  return 0;
}