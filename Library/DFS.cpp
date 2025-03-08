#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adjacency_list;
vector<bool> visited;

void dfs(int node) {
  visited[node] = true;
  cout << node << " ";
  vector<int> current = adjacency_list[node];
  for (auto it = current.begin(); it != current.end(); it++) {
    if (!visited[*it]) {
      dfs(*it);
    }
  }
}

int main() {
  adjacency_list = {{1, 2}, {0, 2}, {0, 1, 3}, {3}};

  adjacency_list.resize(4);
  visited.resize(4, false);
  int start_node = 2;

  dfs(start_node);

  return 0;
}
