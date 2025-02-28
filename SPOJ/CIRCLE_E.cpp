// https://www.spoj.com/problems/CIRCLE_E/en/
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

  while (T--) {
    double R1, R2, R3;
    cin >> R1 >> R2 >> R3;

    double k1 = 1.0 / R1;
    double k2 = 1.0 / R2;
    double k3 = 1.0 / R3;
    double k4 = k1 + k2 + k3 + 2 * sqrt(k1 * k2 + k2 * k3 + k3 * k1);
    double result = 1.0 / k4;

    cout << fixed << setprecision(6) << result << endl;
  }

  return 0;
}
