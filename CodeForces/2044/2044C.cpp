// https://codeforces.com/contest/2044/problem/C

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int totalA, totalB, totalC, filled = 0, totalSeat = 2 * m;

    if (a <= m) {
      totalA = a;
    } else {
      totalA = m;
    }

    if (b <= m) {
      totalB = b;
    } else {
      totalB = m;
    }

    filled = totalA + totalB;

    if (filled < totalSeat && c <= totalSeat - filled) {
      totalC = c;
    } else {
      totalC = totalSeat - filled;
    }
    filled += totalC;

    cout << filled << '\n';
  }

  return 0;
}