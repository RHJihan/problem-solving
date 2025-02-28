// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4442
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y, r;
    cin >> x >> y >> r;

    double distance = sqrt(x * x + y * y);
    double shortest = r - distance;
    double longest = r + distance;

    cout << fixed << setprecision(2) << shortest << " " << longest << endl;
  }

  return 0;
}
