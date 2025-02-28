// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1183
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  double x1, y1, x2, y2, x3, y3, x4, y4;

  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
    double ans_x, ans_y;

    if (x1 == x3 && y1 == y3) {
      ans_x = x2 + x4 - x1;
      ans_y = y2 + y4 - y1;
    } else if (x1 == x4 && y1 == y4) {
      ans_x = x2 + x3 - x1;
      ans_y = y2 + y3 - y1;
    } else if (x2 == x3 && y2 == y3) {
      ans_x = x1 + x4 - x2;
      ans_y = y1 + y4 - y2;
    } else {
      ans_x = x1 + x3 - x2;
      ans_y = y1 + y3 - y2;
    }

    cout << fixed << setprecision(3) << ans_x << " " << ans_y << '\n';
  }

  return 0;
}
