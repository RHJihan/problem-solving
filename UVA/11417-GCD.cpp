// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2412
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    int g = 0;
    for (int i = 1; i < n; i++) {
      for (int j = i + 1; j <= n; j++) {
        g += gcd(i, j);
      }
    }

    cout << g << '\n';
  }

  return 0;
}
