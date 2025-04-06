#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &dist) {
  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i];
    if (dist[neighbor] == -1 || dist[neighbor] > dist[node] + 1) {
      dist[neighbor] = dist[node] + 1;
      dfs(neighbor, adj, dist);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  int case_num = 1;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int s, d;
    cin >> s >> d;

    vector<int> from_start(n, -1), from_dest(n, -1);

    from_start[s] = 0;
    dfs(s, adj, from_start);

    from_dest[d] = 0;
    dfs(d, adj, from_dest);

    int max_time = 0;
    for (int i = 0; i < n; i++) {
      if (from_start[i] != -1 && from_dest[i] != -1) {
        max_time = max(max_time, from_start[i] + from_dest[i]);
      }
    }

    cout << "Case " << case_num++ << ": " << max_time << endl;
  }

  return 0;
}
