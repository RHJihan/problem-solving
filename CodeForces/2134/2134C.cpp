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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<int> b(n, 0);

    long long count = 0;

    for (int i = 0; i < n; i += 2) {
      int minValue = a[i];

      if (i >= 2) {
        minValue = min(minValue, a[i - 1] - b[i - 2]);
      }

      if (i + 1 < n) {
        minValue = min(minValue, a[i + 1]);
      }

      b[i] = minValue;

      count += (a[i] - b[i]);
    }

    cout << count << endl;
  }

  return 0;
}
