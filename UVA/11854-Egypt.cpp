// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2954
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif
  while (true) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0) {
      break;
    }

    bool rightAngled = false;

    if ((a > b && a > c) && (b * b + c * c == a * a)) {
      rightAngled = true;
    } else if ((b > a && b > c) && (a * a + c * c == b * b)) {
      rightAngled = true;
    } else if ((c > a && c > b) && (a * a + b * b == c * c)) {
      rightAngled = true;
    }
    cout << (rightAngled ? "right" : "wrong") << '\n';
  }

  return 0;
}