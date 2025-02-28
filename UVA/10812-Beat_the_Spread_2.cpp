// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1753
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif
  int n;
  cin >> n;

  while (n--) {
    int s, d;
    cin >> s >> d;

    if ((s + d) % 2 == 0 && (s - d) >= 0) {
      int a = (s + d) / 2;
      int b = (s - d) / 2;

      if (a >= 0 && b >= 0) {
        if (a > b)
          cout << a << " " << b << '\n';
        else
          cout << b << " " << a << '\n';
      } else {
        cout << "impossible" << '\n';
      }
    } else {
      cout << "impossible" << '\n';
    }
  }

  return 0;
}
