// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456
#include <cmath>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  while (true) {
    int a, b;
    cin >> a >> b;
    if (a == 0 & b == 0) {
      break;
    }

    int low = (int)ceil(sqrt(a));
    int high = (int)floor(sqrt(b));

    cout << high - low + 1 << '\n';
  }
  return 0;
}