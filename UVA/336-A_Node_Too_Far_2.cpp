#include <iostream>
#include <map>
#include <set>
using namespace std;

void dfs(map<int, set<int>> &graph, map<int, int> &visited, int current, int depth, int ttl) {
  if (depth > ttl) {
    return;
  }

  visited[current] = depth;

  for (auto it = graph[current].begin(); it != graph[current].end(); it++) {
    int neighbor = *it;
    if (visited.find(neighbor) == visited.end() || visited[neighbor] > depth + 1) {
      dfs(graph, visited, neighbor, depth + 1, ttl);
    }
  }
}

int count(map<int, set<int>> &graph, int start, int ttl) {
  map<int, int> visited;

  dfs(graph, visited, start, 0, ttl);

  int total_nodes = (int)graph.size();
  int reachable = (int)visited.size();
  return total_nodes - reachable;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  int case_number = 1;

  while (cin >> n) {
    if (n == 0) {
      break;
    }

    map<int, set<int>> graph;

    for (int i = 0; i < n; ++i) {
      int u, v;
      cin >> u >> v;
      graph[u].insert(v);
      graph[v].insert(u);
    }

    int start, ttl;
    while (cin >> start >> ttl) {
      if (start == 0 && ttl == 0) {
        break;
      }

      int not_reachable;

      if (graph.find(start) == graph.end()) {
        not_reachable = (int)graph.size();
      } else {
        not_reachable = count(graph, start, ttl);
      }

      cout << "Case " << case_number++ << ": " << not_reachable
           << " nodes not reachable from node " << start
           << " with TTL = " << ttl << "." << endl;
    }
  }

  return 0;
}
