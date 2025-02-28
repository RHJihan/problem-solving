// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4023
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int l;
    cin >> l;

    double width = (6.0 / 10.0) * l;
    double radius = l / 5.0;

    double red_area = acos(-1) * radius * radius;

    double total_area = l * width;

    double green_area = total_area - red_area;

    cout << fixed << setprecision(2) << red_area << " " << green_area << endl;
  }

  return 0;
}
