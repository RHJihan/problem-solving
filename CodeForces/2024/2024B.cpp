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
    long long n, k;
    cin >> n >> k;

    vector<long long> cans(n);
    for (int i = 0; i < n; i++) {
      cin >> cans[i];
    }

    sort(cans.begin(), cans.end());

    long long total_get = 0;
    long long press_count = 0;

    for (int i = 0; i < n; i++) {
      cans[i] -= total_get;

      long long can_get = min(cans[i], k);

      total_get += can_get;

      long long max_get = cans[i] * (n - i);
      long long current = min(max_get + 1, k);

      press_count += current;

      k -= cans[i] * (n - i);

      if (k <= 0) {
        break;
      }
    }

    cout << press_count << endl;
  }

  return 0;
}
