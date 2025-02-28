// https://lightoj.com/problem/triangle-partitioning
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    double AB, AC, BC, ratio;
    cin >> AB >> AC >> BC >> ratio;

    double AD = AB * sqrt(ratio / (1.0 + ratio));

    cout << fixed << setprecision(10); 
    cout << "Case " << t << ": " << AD << endl;
  }

  return 0;
}