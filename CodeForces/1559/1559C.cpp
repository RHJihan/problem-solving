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

    for (int i = 0; i < n - 1; i++) {
      if (a[i] == 0 && a[i + 1] == 1) {
        for (int j = 1; j <= i + 1; j++) {
          cout << j << " ";
        }
        cout << n + 1 << " ";
        for (int j = i + 2; j <= n; j++) {
          cout << j << " ";
        }
        cout << endl;
        found = true;
        break;
      }
    }

    if (!found) {
      if (a[0] == 1) {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++) {
          cout << i << " ";
        }
        cout << endl;
      } else if (a[n - 1] == 0) {

        for (int i = 1; i <= n; i++) {
          cout << i << " ";
        }
        cout << n + 1 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}
