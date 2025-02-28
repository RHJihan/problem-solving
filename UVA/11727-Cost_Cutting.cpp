// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c)) {
      cout << "Case " << i << ": " << a << '\n';
    } else if ((b > a && b < c) || (b < a && b > c)) {
      cout << "Case " << i << ": " << b << '\n';
    } else {
      cout << "Case " << i << ": " << c << '\n';
    }
  }

  return 0;
}