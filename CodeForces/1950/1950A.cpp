// https://codeforces.com/contest/1950/problem/A
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
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) {
      cout << "STAIR" << '\n';

    } else if (a < b && b > c) {
      cout << "PEAK" << '\n';

    } else {
      cout << "NONE" << '\n';
    }
  }

  return 0;
}