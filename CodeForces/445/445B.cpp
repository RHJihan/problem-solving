#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1005;
vector<int> graph[MAXN];
bool visited[MAXN];

int dfs(int node) {
  visited[node] = true;
  int size = 1;

  for (int i = 0; i < (int)graph[node].size(); i++) {
    int neighbor = graph[node][i];
    if (!visited[neighbor]) {
      size += dfs(neighbor);
    }
  }
  return size;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  long long danger = 1;

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      int group_size = dfs(i); 
      long long group_danger = 1;

      for (int j = 1; j < group_size; j++) {
        group_danger *= 2;
      }

      danger *= group_danger;
    }
  }

  cout << danger << endl;
  return 0;
}
