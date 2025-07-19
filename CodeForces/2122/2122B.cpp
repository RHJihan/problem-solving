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

    vector<long long> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    long long count = 0;

    for (int i = 0; i < n; i++) {
      long long zero = max(0LL, a[i] - c[i]);
      long long one = max(0LL, b[i] - d[i]);

      if (one > 0) {
        long long rest_zero = a[i] - zero;
        count += max(0LL, rest_zero);
      }

      count += zero + one;
    }

    cout << count << endl;
  }

  return 0;
}