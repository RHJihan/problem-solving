// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912
#include <cmath>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int a, b;

  while (true) {
    cin >> a >> b;

    if (a == -1 && b == -1) {
      break;
    }

    int forward = (b - a + 100) % 100;
    int backward = (a - b + 100) % 100;

    cout << min(forward, backward) << '\n';
  }

  return 0;
}
