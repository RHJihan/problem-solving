// https://codeforces.com/contest/1971/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    (a < b) ? (cout << a << " " << b << '\n') : (cout << b << " " << a << '\n');
  }

  return 0;
}