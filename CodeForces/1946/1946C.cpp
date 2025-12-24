#include <iostream>
#include <vector>
using namespace std;

vector<int> g[200005];
int n, k;
int cuts; 

int dfs(int v, int p, int x) {
  int size = 1;

  for (int u : g[v]) {
    if (u == p)
      continue;
    size += dfs(u, v, x);
  }

  if (size >= x) {
    cuts++;
    return 0; 
  }

  return size;
}

bool ok(int x) {
  cuts = 0;
  dfs(1, -1, x);
  return cuts >= k + 1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
      g[i].clear();

    for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }

    int low = 1, high = n, ans = 1;

    while (low <= high) {
      int mid = (low + high) / 2;

      if (ok(mid)) {
        ans = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
