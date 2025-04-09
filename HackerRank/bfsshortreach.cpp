// https://www.hackerrank.com/challenges/bfsshortreach/problem

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> bfs(int n, vector<vector<int>> &adj, int s) {
  vector<int> dist(n + 1, -1);
  vector<bool> visited(n + 1, false);
  queue<int> q;

  dist[s] = 0;
  visited[s] = true;
  q.push(s);

  while (!q.empty()) {
    int curr = q.front();
    q.pop();

    for (int i = 0; i < (int)adj[curr].size(); i++) {
      int neighbor = adj[curr][i];
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        dist[neighbor] = dist[curr] + 6;
        q.push(neighbor);
      }
    }
  }

  vector<int> result;
  for (int i = 1; i <= n; ++i) {
    if (i != s) {
      result.push_back(dist[i]);
    }
  }
  return result;
}

int main() {
  int q;
  cin >> q;

  while (q--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int s;
    cin >> s;

    vector<int> ans = bfs(n, adj, s);

    for (int i = 0; i < (int)ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
