#include <iostream>
#include <vector>
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
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    bool found = false;
    int x, y;

    for (int i = 0; i < n && !found; i++) {
      for (int j = i + 1; j < n && !found; j++) {
        int rem = a[j] % a[i];

        if (rem % 2 == 0) {
          x = a[i];
          y = a[j];
          found = true;
        }
      }
    }

    if (found) {
      cout << x << " " << y << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}