// https://codeforces.com/contest/1999/problem/B
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result = 0;
    int score1 = 0;
    int score2 = 0;

    if (a > c)
      score1 += 1;
    else if (a < c)
      score1 -= 1;

    if (b > d)
      score1 += 1;
    else if (b < d)
      score1 -= 1;

    if (score1 > 0)
      result += 2;

    if (a > d)
      score2 += 1;
    else if (a < d)
      score2 -= 1;

    if (b > c)
      score2 += 1;
    else if (b < c)
      score2 -= 1;

    if (score2 > 0)
      result += 2;

    cout << result << '\n';
  }

  return 0;
}
