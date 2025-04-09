#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> graph[MAXN];
bool visited[MAXN];
int degree[MAXN];

void dfs(int node) {
  visited[node] = true;
  for (int i = 0; i < (int)graph[node].size(); i++) {
    int neighbor = graph[node][i];
    if (!visited[neighbor]) {
      dfs(neighbor);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
    degree[u]++;
    degree[v]++;
  }

  dfs(1);

  int deg1 = 0, deg2 = 0, deg_n_1 = 0;

  for (int i = 1; i <= n; ++i) {
    if (degree[i] == 1)
      deg1++;
    else if (degree[i] == 2)
      deg2++;
    else if (degree[i] == n - 1)
      deg_n_1++;
  }

  if (m == n - 1 && deg1 == 2 && deg2 == n - 2) {
    cout << "bus topology" << endl;
  } else if (m == n && deg2 == n) {
    cout << "ring topology" << endl;
  } else if (m == n - 1 && deg_n_1 == 1 && deg1 == n - 1) {
    cout << "star topology" << endl;
  } else {
    cout << "unknown topology" << endl;
  }

  return 0;
}
