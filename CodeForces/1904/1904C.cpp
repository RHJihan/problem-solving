#include <algorithm>
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
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (k >= 3) {
      cout << 0 << endl;
      continue;
      ;
    }

    long long min_value = a[0];

    for (int i = 1; i < n; ++i) {
      min_value = min(min_value, a[i] - a[i - 1]);
    }

    if (k == 2) {
      for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
          long long diff = a[j] - a[i];

          int pos = lower_bound(a.begin(), a.end(), diff) - a.begin();

          if (pos < n) {
            min_value = min(min_value, abs(a[pos] - diff));
          }

          if (pos > 0) {
            min_value = min(min_value, abs(a[pos - 1] - diff));
          }
        }
      }
    }

    cout << min_value << endl;
  }

  return 0;
}
