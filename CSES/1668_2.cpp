#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int team[MAXN];
bool possible = true;

void dfs(int node, int current_team) {
  team[node] = current_team;

  for (int i = 0; i < (int)adj[node].size(); i++) {
    int neighbor = adj[node][i];
    if (team[neighbor] == 0) {
      dfs(neighbor, 3 - current_team);
    } else if (team[neighbor] == current_team) {
      possible = false;
      return;
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

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (team[i] == 0) {
      dfs(i, 1);
      if (!possible) {
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
