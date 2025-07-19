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
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long gcd1 = a[0];
    for (long long i = 0; i < n; i += 2) {
      gcd1 = __gcd(gcd1, a[i]);
    }

    long long gcd2 = a[1];
    for (long long i = 1; i < n; i += 2) {
      gcd2 = __gcd(gcd2, a[i]);
    }

    bool ok = true;
    for (long long i = 1; i < n; i += 2) {
      if (a[i] % gcd1 == 0) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << gcd1 << endl;
    } else {

      ok = true;
      for (long long i = 0; i < n; i += 2) {
        if (a[i] % gcd2 == 0) {
          ok = false;
          break;
        }
      }

      if (ok)
        cout << gcd2 << endl;
      else
        cout << 0 << endl;
    }
  }
}
