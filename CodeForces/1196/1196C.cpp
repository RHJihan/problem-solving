#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int q;
  cin >> q;

  while (q--) {
    int n;
    cin >> n;

    int min_x = -100000, max_x = 100000;
    int min_y = -100000, max_y = 100000;

    for (int i = 0; i < n; i++) {
      int x, y, left, up, right, down;
      cin >> x >> y >> left >> up >> right >> down;

      if (left == 0) {
        min_x = max(min_x, x);
      }
      if (right == 0) {
        max_x = min(max_x, x);
      }
      if (down == 0) {
        min_y = max(min_y, y);
      }
      if (up == 0) {
        max_y = min(max_y, y);
      }
    }

    if (min_x > max_x || min_y > max_y) {
      cout << 0 << endl;
    } else {
      cout << "1 " << min_x << " " << min_y << endl;
    }
  }

  return 0;
}
