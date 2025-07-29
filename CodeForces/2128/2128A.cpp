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
    long long c;
    cin >> n >> c;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int coins = 0;

    while (!a.empty()) {
      int free_index = -1;
      for (int i = 0; i < a.size(); ++i) {
        if (a[i] <= c) {
          if (free_index == -1 || a[i] > a[free_index]) {
            free_index = i;
          }
        }
      }

      if (free_index != -1) {
        a.erase(a.begin() + free_index);
      } else {
        auto it = min_element(a.begin(), a.end());
        a.erase(it);
        coins++;
      }

      for (auto &x : a)
        x *= 2;
    }

    cout << coins << endl;
  }

  return 0;
}
