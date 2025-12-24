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
    long long n, a, b;
    cin >> n >> a >> b;

    long long g = __gcd(a, b);

    vector<long long> c(n);

    for (int i = 0; i < n; i++) {
      cin >> c[i];
      c[i] %= g;
    }

    sort(c.begin(), c.end());

    long long result = c.back() - c.front();

    for (int i = 0; i < n - 1; i++) {

      long long candidate = (c[i] + g) - c[i + 1];
      result = min(result, candidate);
    }

    cout << result << endl;
  }

  return 0;
}
