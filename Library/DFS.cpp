#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adjacency_list;
vector<bool> visited;
vector<int> traversal_sequence;

void Depth_First_Search(int node) {
  visited[node] = true;
  traversal_sequence.push_back(node);
  vector<int> current = adjacency_list[node];
  for (auto it = current.begin(); it != current.end(); it++) {
    if (!visited[*it]) {
      Depth_First_Search(*it);
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

  adjacency_list.resize(n + 1);
  visited.resize(n, false);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adjacency_list[u].push_back(v);
  }

  int start_node = 0;

  Depth_First_Search(start_node);

  for (int i = 0; i < (int)traversal_sequence.size(); i++) {
    cout << traversal_sequence[i] << " ";
  }

  return 0;
}
