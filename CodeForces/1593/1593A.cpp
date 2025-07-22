#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c) {
      cout << 0 << " ";
    } else {
      int max_other = max(b, c);
      cout << (max_other - a + 1) << " ";
    }

    if (b > a && b > c) {
      cout << 0 << " ";
    } else {
      int max_other = max(a, c);
      cout << (max_other - b + 1) << " ";
    }

    if (c > a && c > b) {
      cout << 0 << endl;
    } else {
      int max_other = max(a, b);
      cout << (max_other - c + 1) << endl;
    }
  }

  return 0;
}
