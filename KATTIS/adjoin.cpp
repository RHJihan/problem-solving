#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

pair<int, int> bfs(int start, vector<vector<int>> &graph, vector<bool> &visited) {
  queue<int> q;
  q.push(start);
  visited[start] = true;
  int node = start;
  int distance = 0;

  while (!q.empty()) {
    int size = (int)q.size();
    while (size--) {
      int curr = q.front();
      q.pop();
      node = curr;

      for (int i = 0; i < (int)graph[curr].size(); i++) {
        int neighbor = graph[curr][i];
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }
    distance++;
  }
  return {node, distance - 1};
}

pair<int, int> get_diameter_and_center(int start, vector<vector<int>> &graph, vector<bool> &visited) {
  pair<int, int> far1 = bfs(start, graph, visited);
  visited.assign(graph.size(), false);
  pair<int, int> far2 = bfs(far1.first, graph, visited);

  int diameter = far2.second;

  return {diameter, (diameter + 1) / 2};
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  vector<vector<int>> graph(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  vector<bool> visited(n, false);
  vector<int> centers;

  int max_diameter = 0;

  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      pair<int, int> result = get_diameter_and_center(i, graph, visited);
      max_diameter = max(max_diameter, result.first);
      centers.push_back(result.second);
    }
  }

  sort(centers.rbegin(), centers.rend());

  if (centers.size() == 1) {
    cout << max_diameter << endl;
  } else if (centers.size() == 2) {
    cout << max(max_diameter, centers[0] + 1 + centers[1]) << endl;
  } else {
    int option1 = centers[0] + 1 + centers[1];
    int option2 = centers[1] + 1 + centers[2] + 1;
    cout << max({max_diameter, option1, option2}) << endl;
  }

  return 0;
}
