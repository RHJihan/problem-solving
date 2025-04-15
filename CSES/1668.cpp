#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int team[MAXN];

bool bfs(int start) {
  queue<int> q;
  q.push(start);
  team[start] = 1;

  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int i = 0; i < (int)adj[node].size(); i++) {
      int neighbor = adj[node][i];
      if (team[neighbor] == 0) {
        team[neighbor] = 3 - team[node];
        q.push(neighbor);
      } else if (team[neighbor] == team[node]) {
        return false;
      }
    }
  }

  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (team[i] == 0) {
      if (!bfs(i)) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << team[i] << " ";
  }
  cout << endl;

  return 0;
}
