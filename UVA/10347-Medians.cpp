// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1288
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double calculateArea(double m1, double m2, double m3) {
  double s = (m1 + m2 + m3) / 2.0;
  double area = (4.0 / 3.0) * (sqrt(s * (s - m1) * (s - m2) * (s - m3)));
  return area;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt","w",stdout);
#endif

  double m1, m2, m3;

  while (cin >> m1 >> m2 >> m3) {
    if ((m1 + m2 <= m3) || (m2 + m3 <= m1) || (m1 + m3 <= m2)) {
      cout << "-1.000" << endl;
    } else {
      double area = calculateArea(m1, m2, m3);
      if (area > 0) {
        cout << fixed << setprecision(3) << area << '\n';
      } else {
        cout << "-1.000" << '\n';
      }
    }
  }

  return 0;
}
