// https://lightoj.com/problem/olympics
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    double l, w;
    char colon;
    cin >> l >> colon >> w;

    double r = sqrt(l * l + w * w) / 2.0;
    double angle = 2 * atan(w / l);
    double arc = angle * r;
    double ratio = 200 / (arc + l);

    cout << fixed << setprecision(10);
    cout << "Case " << i << ": " << ratio * l << " " << ratio * w << endl;
  }

  return 0;
}