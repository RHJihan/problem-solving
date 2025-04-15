#include <iostream>
#include <map>
#include <queue>
#include <set>
using namespace std;

int bfs(map<int, set<int>> &graph, int start, int ttl) {
  map<int, int> visited;
  queue<pair<int, int>> q;

  q.push({start, 0});
  visited[start] = 0;

  while (!q.empty()) {
    int current = q.front().first;
    int depth = q.front().second;
    q.pop();

    if (depth >= ttl) {
      continue;
    }

    for (auto it = graph[current].begin(); it != graph[current].end(); it++) {
      int neighbor = *it;
      if (visited.find(neighbor) == visited.end()) {
        visited[neighbor] = depth + 1;
        q.push({neighbor, depth + 1});
      }
    }
  }

  int total = (int)graph.size();
  int reachable = (int)visited.size();
  return total - reachable;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  int case_count = 1;

  while (cin >> n) {
    if (n == 0) {
      break;
    }

    map<int, set<int>> graph;

    for (int i = 0; i < n; i++) {
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

      int not_reachable = 0;

      if (graph.find(start) == graph.end()) {
        not_reachable = (int)graph.size();
      } else {
        not_reachable = bfs(graph, start, ttl);
      }

      cout << "Case " << case_count++ << ": " << not_reachable << " nodes not reachable from node ";
      cout << start << " with TTL = " << ttl << "." << endl;
    }
  }

  return 0;
}
