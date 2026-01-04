#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> state;
vector<int> result;
bool hasCycle = false;

void dfs(int u) {
  state[u] = 1;

  for (int v : graph[u]) {
    if (state[v] == 0) {
      dfs(v);
      if (hasCycle)
        return;
    } else if (state[v] == 1) {
      hasCycle = true;
      return;
    }
  }

  state[u] = 2;
  result.push_back(u);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  graph.resize(n + 1);
  state.assign(n + 1, 0);

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
  }

  for (int i = 1; i <= n; i++) {
    sort(graph[i].rbegin(), graph[i].rend());
  }

  for (int i = n; i >= 1; i--) {
    if (state[i] == 0) {
      dfs(i);
      if (hasCycle) {
        cout << "Sandro fails." << endl;
        return 0;
      }
    }
  }

  reverse(result.begin(), result.end());

  for (int x : result) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
