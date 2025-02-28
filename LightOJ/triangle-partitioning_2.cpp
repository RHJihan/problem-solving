// https://lightoj.com/problem/triangle-partitioning
#include <iomanip>
#include <iostream>
using namespace std;

double findAD(double AB, double ratio) {
  double low = 0, high = AB, mid;
  double targetRatio = ratio / (1.0 + ratio);

  while (high - low > 1e-10) {
    mid = (low + high) / 2.0;
    double currentRatio = (mid / AB) * (mid / AB);

    if (currentRatio < targetRatio)
      low = mid;
    else
      high = mid;
  }
  return mid;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    double AB, AC, BC, ratio;
    cin >> AB >> AC >> BC >> ratio;

    double AD = findAD(AB, ratio);

    cout << fixed << setprecision(10);
    cout << "Case " << i << ": " << AD << endl;
  }

  return 0;
}
