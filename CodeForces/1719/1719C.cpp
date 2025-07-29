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
    long long n, q;
    cin >> n >> q;

    vector<long long> strength(n);
    for (int i = 0; i < n; i++) {
      cin >> strength[i];
    }

    vector<long long> wins(n, 0);
    int current = 0;

    for (int i = 1; i < n; i++) {
      if (strength[i] > strength[current]) {
        current = i;
      }
      wins[current]++;
    }

    for (int i = 0; i < q; i++) {
      long long j, k;
      cin >> j >> k;
      j--;

      if (j > k) {
        cout << 0 << endl;
        continue;
      }

      long long possibleFights = 0;
      if (j == 0)
        possibleFights = k;
      else
        possibleFights = k - (j - 1);

      if (j == current) {
        cout << possibleFights << endl;
      } else {
        cout << min(wins[j], possibleFights) << endl;
      }
    }
  }

  return 0;
}
