#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 200005;
vector<int> adj[MAXN];
int depth[MAXN], city_count[MAXN];

void dfs(int node, int parent) {
  city_count[node] = 1; 

  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i];
    if (neighbor == parent) {
      continue;
    }
    depth[neighbor] = depth[node] + 1;
    dfs(neighbor, node);
    city_count[node] += city_count[neighbor];
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  depth[1] = 0;
  dfs(1, 0);

  vector<int> scores;
  for (int i = 1; i <= n; ++i) {
    scores.push_back(depth[i] - (city_count[i] - 1));
  }

  sort(scores.rbegin(), scores.rend());

  long long max_happiness = 0;
  for (int i = 0; i < k; i++) {
    max_happiness += scores[i];
  }

  cout << max_happiness << endl;

  return 0;
}
