// https://lightoj.com/problem/crossed-ladders
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double findWidth(double x, double y, double c) {
  double left = 0.0, right = min(x, y), mid;

  while (right - left > 1e-10) {
    mid = (left + right) / 2.0;
    double h1 = sqrt(x * x - mid * mid);
    double h2 = sqrt(y * y - mid * mid);
    double h = (h1 * h2) / (h1 + h2);

    if (h >= c) {
      left = mid;
    } else {
      right = mid;
    }
  }
  return left;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    double x, y, c;
    cin >> x >> y >> c;
    double width = findWidth(x, y, c);

    cout << fixed << setprecision(10);
    cout << "Case " << i << ": " << width << endl;
  }
  return 0;
}
