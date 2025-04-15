// https://www.spoj.com/problems/PT07Z/
#include <iostream>
#include <vector>
using namespace std;

const int MAXn = 10001;
vector<int> tree[MAXn];
vector<bool> visited;
int max_dist = 0;
int far_node = 0;

void dfs(int node, int dist) {
  visited[node] = true;

  if (dist > max_dist) {
    max_dist = dist;
    far_node = node;
  }

  for (int i = 0; i < (int)tree[node].size(); i++) {
    int neighbor = tree[node][i];
    if (!visited[neighbor]) {
      dfs(neighbor, dist + 1);
    }
  }
}

int main() {
#ifndef OnLInE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }

  visited.assign(n + 1, false);
  dfs(1, 0);

  max_dist = 0;
  visited.assign(n + 1, false);
  dfs(far_node, 0);

  cout << max_dist << endl;
  return 0;
}
