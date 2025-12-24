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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> missing(m);
    for (int i = 0; i < m; i++) {
      cin >> missing[i];
    }

    vector<bool> knows(n + 1, false);
    for (int i = 0; i < k; i++) {
      int q;
      cin >> q;
      knows[q] = true;
    }

    string result = "";

    if (k < n - 1) {
      for (int i = 0; i < m; i++) {
        result += '0';
      }
    } else {
      if (k == n) {
        for (int i = 0; i < m; i++) {
          result += '1';
        }
      } else {

        for (int i = 0; i < m; i++) {
          if (knows[missing[i]]) {
            result += '0';
          } else {
            result += '1';
          }
        }
      }
    }

    cout << result << "\n";
  }

  return 0;
}
