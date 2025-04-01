#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool bfs(vector<vector<int>> &graph, vector<int> &color, int node, vector<int> &count) {
  queue<int> q;
  color[node] = 0;
  count[color[node]]++;
  q.push(node);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int i = 0; i < (int)graph[u].size(); ++i) {
      int v = graph[u][i];
      if (color[v] == color[u]) {
        return false;
      } else if (color[v] == -1) {
        color[v] = 1 - color[u];
        count[color[v]]++;
        q.push(v);
      }
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int v, e;
    cin >> v >> e;

    vector<vector<int>> graph(v);
    vector<int> color(v, -1);

    while (e--) {
      int ff, tt;
      cin >> ff >> tt;
      graph[ff].push_back(tt);
      graph[tt].push_back(ff);
    }

    int total_count = 0;
    int possible = true;
    for (int j = 0; j < (int)graph.size(); ++j) {
      if (color[j] != -1) {
        continue;
      }
      vector<int> count(2, 0);

      bool is_bipartite = bfs(graph, color, j, count);
      if (!is_bipartite) {
        possible = false;
        cout << -1 << endl;
        break;
      }

      total_count += max(1, min(count[0], count[1]));
    }

    if (possible) {
      cout << total_count << endl;
    }
  }
  return 0;
}