#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool cat[MAXN];
bool visited[MAXN];
int n, m;
int valid = 0;

void dfs(int node, int count) {
  visited[node] = true;

  if (cat[node]) {
    count++;
  } else {
    count = 0;
  }

  if (count > m) {
    return;
  }

  bool leaf = true;

  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i];
    if (!visited[neighbor]) {
      leaf = false;
      dfs(neighbor, count);
    }
  }

  if (leaf) {
    valid++;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    cin >> cat[i];
  }

  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  dfs(1, 0);

  cout << valid << endl;

  return 0;
}
