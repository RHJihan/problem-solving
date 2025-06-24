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
    int n;
    long long s;
    cin >> n >> s;
    int count = 0;

    for (int i = 0; i < n; i++) {
      int dx, dy;
      long long x, y;
      cin >> dx >> dy >> x >> y;
      if (dx != dy) {
        if (x + y == s) {
          count++;
        }
      } else {
        if (x == y) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
