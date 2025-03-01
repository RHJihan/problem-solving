// https://codeforces.com/contest/1829/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
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

    int maxBlank = 0;
    int currentBlank = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        currentBlank++;
        maxBlank = max(maxBlank, currentBlank);
      } else {
        currentBlank = 0;
      }
    }

    cout << maxBlank << '\n';
  }

  return 0;
}