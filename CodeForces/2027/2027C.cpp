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
    map<int, int> visited;
    set<pair<int, int>> t;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      x += i;
      if (x < n) {
        continue;
      } else {
        t.emplace(x, i);
      }
    }

    visited[n] = 1;
    int ans = n;
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
