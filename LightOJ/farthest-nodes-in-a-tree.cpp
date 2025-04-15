#include <iostream>
#include <vector>
using namespace std;

int max_dist;
int far_node;

void dfs(int node, int dist, vector<bool> &visited, vector<vector<pair<int, int>>> &adj) {
  visited[node] = true;

  if (dist > max_dist) {
    max_dist = dist;
    far_node = node;
  }

  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i].first;
    int weight = adj[node][i].second;

    if (!visited[neighbor]) {
      dfs(neighbor, dist + weight, visited, adj);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  for (int case_count = 1; case_count <= t; case_count++) {
    int n;
    cin >> n;

    vector<vector<pair<int, int>>> adj(n);

    for (int i = 0; i < n - 1; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
    }

    vector<bool> visited(n, false);
    max_dist = 0;
    dfs(0, 0, visited, adj);

    visited.assign(n, false);
    max_dist = 0;
    dfs(far_node, 0, visited, adj);

    cout << "Case " << case_count << ": " << max_dist << endl;
  }

  return 0;
}
