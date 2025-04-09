#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> bfs_seq(n);
  map<int, int> pos;
  for (int i = 0; i < n; i++) {
    cin >> bfs_seq[i];
    pos[bfs_seq[i]] = i;
  }

  for (int i = 1; i <= n; i++) {
    sort(adj[i].begin(), adj[i].end(), [&](int a, int b) {
      return pos[a] < pos[b];
    });
  }

  vector<bool> visited(n + 1, false);
  queue<int> q;
  q.push(1);
  visited[1] = true;

  int index = 1;

  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int i = 0; i < (int)adj[node].size(); i++) {
      int neighbor = adj[node][i];
      if (!visited[neighbor]) {
        if (bfs_seq[index] != neighbor) {
          cout << "No" << endl;
          return 0;
        }
        visited[neighbor] = true;
        q.push(neighbor);
        index++;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
