#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adjacency_list;
vector<int> color;

bool dfs(int node, int current) {
  color[node] = current;

  for (int i = 0; i < (int)adjacency_list[node].size(); i++) {
    int neighbor = adjacency_list[node][i];

    if (color[neighbor] == -1) {
      bool bicolorable = dfs(neighbor, 1 - current);
      if (!bicolorable) {
        return false;
      }
    } else if (color[neighbor] == color[node]) {
      return false;
    }
  }

  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, l;

  while (cin >> n) {
    if (n == 0) {
      break;
    }

    cin >> l;
    adjacency_list.assign(n, vector<int>());
    color.assign(n, -1);

    for (int i = 0; i < l; i++) {
      int u, v;
      cin >> u >> v;
      adjacency_list[u].push_back(v);
      adjacency_list[v].push_back(u);
    }

    if (dfs(0, 0)) {
      cout << "BICOLORABLE." << endl;
    } else {
      cout << "NOT BICOLORABLE." << endl;
    }
  }
  return 0;
}