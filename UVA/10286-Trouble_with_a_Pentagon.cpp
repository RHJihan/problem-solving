// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1227
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double f;
  double sin180 = sin(108.0 * (M_PI / 180.0)),
         sin63 = sin(63.0 * (M_PI / 180.0));
  cout << fixed << setprecision(11);
  while (cin >> f) {
    cout << f * (sin180 / sin63) << '\n';
  }

  return 0;
}