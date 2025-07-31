#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

signed main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<long long, long long> visited;
    set<pair<long long, long long>> t;
    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      x += i;
      if (x < n) {
        continue;
      } else {
        t.emplace(x, i);
      }
    }

    visited[n] = 1;
    long long ans = n;
    for (auto [x, d] : t) {
      if (visited.find(x) != visited.end()) {
        ans = max(ans, x + d);
        visited[x + d] = 1;
      }
    }

    cout << ans << endl;
  }
  return 0;
}
