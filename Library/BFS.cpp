#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> bfs(vector<vector<int>> &adjacency_list, int start_node) {
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

  vector<vector<int>> adjacency_list = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
  int start_node = 0;
  vector<int> traversal_sequence = bfs(adjacency_list, start_node);

  for (int i = 0; i < (int)traversal_sequence.size(); i++) {
    cout << traversal_sequence[i] << " ";
  }
  return 0;
}
