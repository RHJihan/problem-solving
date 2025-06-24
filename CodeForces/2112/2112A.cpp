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
    int a, x, y;
    cin >> a >> x >> y;

    bool found = false;

    for (int i = 1; i <= 100; i++) {
      if (i == a) {
        continue;
      }

      int dist_x = abs(i - x);
      int dist_y = abs(i - y);
      int alice_x = abs(a - x);
      int alice_y = abs(a - y);

      if (dist_x < alice_x && dist_y < alice_y) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
