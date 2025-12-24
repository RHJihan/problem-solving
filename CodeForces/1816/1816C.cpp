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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 1; i <= n - 2; i++) {

      long long diff = a[i] - a[i - 1];

      a[i] -= diff;
      a[i + 1] -= diff;
    }

    if (a[n - 1] >= a[n - 2]) {
      cout << "YES" << endl;

    }

    else {
      if (n % 2 == 1)
        cout << "YES" << endl;

      else
        cout << "NO" << endl;
    }
  }

  return 0;
}
