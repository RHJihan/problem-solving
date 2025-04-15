#include <iostream>
#include <queue>
#include <vector>
using namespace std;

pair<int, int> bfs(int start, int n, const vector<vector<pair<int, int>>> &adj) {
  vector<int> dist(n, -1);
  queue<int> q;
  q.push(start);
  dist[start] = 0;

  int farthest_node = start;
  int max_distance = 0;

  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int i = 0; i < (int)adj[node].size(); i++) {
      int neighbor = adj[node][i].first;
      int weight = adj[node][i].second;

      if (dist[neighbor] == -1) {
        dist[neighbor] = dist[node] + weight;
        q.push(neighbor);

        if (dist[neighbor] > max_distance) {
          max_distance = dist[neighbor];
          farthest_node = neighbor;
        }
      }
    }
  }

  return {farthest_node, max_distance};
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
#endif

  int T;
  cin >> T;

  for (int case_num = 1; case_num <= T; case_num++) {
    int n;
    cin >> n;

    vector<vector<pair<int, int>>> adj(n);

    for (int i = 0; i < n - 1; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
    }

    pair<int, int> p1 = bfs(0, n, adj);

    pair<int, int> p2 = bfs(p1.first, n, adj);

    cout << "Case " << case_num << ": " << p2.second << endl;
  }

  return 0;
}
