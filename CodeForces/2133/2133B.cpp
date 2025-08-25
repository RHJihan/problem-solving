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
    long long n;
    cin >> n;
    vector<long long> g(n);
    for (long long i = 0; i < n; i++) {
      cin >> g[i];
    }

    sort(g.begin(), g.end());

    long long count = 0;

    for (long long i = n - 1; i > 0; i -= 2) {
      count += g[i];
    }

    if (n % 2 == 0) {
      cout << count << endl;
    } else {
      cout << count + g[0] << endl;
    }
  }

  return 0;
}
