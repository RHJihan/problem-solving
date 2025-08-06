#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  vector<long long> pow_two(37);
  for (int i = 0; i <= 36; i++) {
    pow_two[i] = (long long)pow(2, i);
  }

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int count = 0;

    for (int i = 1; i < n; i++) {
      if (a[i] >= a[i - 1]) {
        continue;
      }

      long long diff = a[i - 1] - a[i];

      int steps = 0;
      for (int j = 0; j <= 35; j++) {
        if (pow_two[j] > diff) {
          steps = j;
          break;
        }
      }

      count = max(count, steps);

      a[i] = a[i - 1];
    }

    cout << count << endl;
  }

  return 0;
}
