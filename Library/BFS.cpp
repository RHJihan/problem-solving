#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> Breadth_First_Search(vector<vector<int>> &adjacency_list, int start_node) {
  vector<int> traversal_sequence;

  queue<int> queue;

  vector<bool> visited((int)adjacency_list.size(), false);

  visited[start_node] = true;
  queue.push(start_node);

  while (!queue.empty()) {
    int current = queue.front();
    queue.pop();
    traversal_sequence.push_back(current);

    for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
      int working_node = adjacency_list[current][i];
      if (!visited[working_node]) {
        visited[working_node] = true;
        queue.push(working_node);
      }
    }
  }

  return traversal_sequence;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;
  vector<vector<int>> adjacency_list(n + 1);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adjacency_list[u].push_back(v);
  }

  int start_node = 0;
  vector<int> result = Breadth_First_Search(adjacency_list, start_node);

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }
  return 0;
}
