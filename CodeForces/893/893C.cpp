#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool visited[MAXN];
vector<int> cost;

int dfs(int node) {
  visited[node] = true;
  int min_cost = cost[node];

  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i];
    if (!visited[neighbor]) {
      min_cost = min(min_cost, dfs(neighbor));
    }
  }
  return min_cost;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  cost.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> cost[i];
  }

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  long long total_cost = 0;

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      total_cost += dfs(i);
    }
  }

  cout << total_cost << endl;

  return 0;
}
