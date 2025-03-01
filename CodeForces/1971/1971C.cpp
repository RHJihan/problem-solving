// https://codeforces.com/contest/1971/problem/C
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b) {
      int tmp = a;
      a = b;
      b = tmp;
    }

    if (c > d) {
      int tmp = c;
      c = d;
      d = tmp;
    }

    bool redCross = false;
    bool blueCross = false;
    if (a < c && b > c && b < d) {
      redCross = true;
    }

    if (c < a && d > a && d < b) {
      blueCross = true;
    }

    cout << ((redCross || blueCross) ? "YES" : "NO") << '\n';
  }

  return 0;
}
