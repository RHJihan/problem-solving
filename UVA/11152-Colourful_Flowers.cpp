// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2093
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  double a, b, c;

  while (cin >> a >> b >> c) {

    double s = (a + b + c) / 2.0;

    double triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));

    double radius = triangle_area / s;
    double circle_area = M_PI * radius * radius;

    double inner_radius = (a * b * c) / (4.0 * triangle_area);
    double inner_circle_area = M_PI * inner_radius * inner_radius;

    double sunflower = inner_circle_area - triangle_area;
    double violet = triangle_area - circle_area;
    double rose = circle_area;

    cout << fixed << setprecision(4);
    cout << sunflower << " " << violet << " " << rose << endl;
  }

  return 0;
}
