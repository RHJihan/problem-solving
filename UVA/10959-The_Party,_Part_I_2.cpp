#include <iostream>
#include <vector>
using namespace std;

void dfs(int person, int number, vector<vector<int>> &adj, vector<int> &giovanni) {
  if (giovanni[person] == -1 || number < giovanni[person]) {
    giovanni[person] = number;

    for (int i = 0; i < (int)adj[person].size(); i++) {
      int neighbor = adj[person][i];
      dfs(neighbor, number + 1, adj, giovanni);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int p, d;
    cin >> p >> d;

    vector<vector<int>> adj(p);
    vector<int> giovanni(p, -1);

    for (int i = 0; i < d; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    dfs(0, 0, adj, giovanni);

    for (int i = 1; i < p; i++) {
      cout << giovanni[i] << endl;
    }

    if (t) {
      cout << endl;
    }
  }

  return 0;
}
