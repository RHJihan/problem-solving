#include <climits>
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
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      if ((i + 1) % 2 != 0) {
        sum += a[i];
      } else {
        sum -= a[i];
      }
    }

    if (n == 1) {
      cout << sum << endl;
      continue;
      ;
    }

    long long cost;
    if (n % 2 == 0) {
      cost = n - 2;
    } else {
      cost = n - 1;
    }

    long long change = LLONG_MIN;

    vector<long long> maximum;
    if (n > 1 && 1 % 2 != 0) {
      maximum.push_back(LLONG_MIN);
      maximum.push_back(2 * a[1] - 1);
    } else {
      maximum.push_back(LLONG_MIN);
    }

    for (int i = 2; i < n; ++i) {
      long long val = maximum[i - 1];
      if (i % 2 != 0) {
        val = max(val, 2LL * a[i] - i);
      }
      maximum.push_back(val);
    };
    for (int i = 2; i < n; ++i) {
      if (i % 2 == 0) {
        long long current = maximum[i - 1] - (2LL * a[i] - i);
        change = max(change, current);
      }
    }

    vector<long long> minimum;
    if (0 % 2 == 0) {
      minimum.push_back(2 * a[0] + 0);
    } else {
      minimum.push_back(LLONG_MAX);
    }

    for (int i = 1; i < n; ++i) {
      long long val = minimum[i - 1];
      if (i % 2 == 0) {
        val = min(val, 2LL * a[i] + i);
      }
      minimum.push_back(val);
    }

    for (int i = 1; i < n; ++i) {
      if (i % 2 != 0) {
        long long current = (2LL * a[i] + i) - minimum[i - 1];
        change = max(change, current);
      }
    }

    if (change > 0) {
      cout << max(max(sum, sum + cost), sum + change) << endl;
    } else {
      cout << max(sum, sum + cost) << endl;
    }
  }

  return 0;
}