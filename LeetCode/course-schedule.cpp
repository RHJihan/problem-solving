#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    vector<vector<int>> adj(numCourses);
    for (auto &p : prerequisites) {
      adj[p[1]].push_back(p[0]);
    }

    vector<int> visited(numCourses, 0);

    for (int i = 0; i < numCourses; i++) {
      if (!dfs(i, adj, visited)) {
        return false;
      }
    }
    return true;
  }

  bool dfs(int node, vector<vector<int>> &adj, vector<int> &visited) {
    if (visited[node] == 1)
      return false;
    if (visited[node] == 2)
      return true;

    visited[node] = 1;
    for (int neighbor : adj[node]) {
      if (!dfs(neighbor, adj, visited))
        return false;
    }
    visited[node] = 2;
    return true;
  }
};

int main() {
  Solution sol;
  int numCourses = 2;
  vector<vector<int>> prerequisites = {{1, 0}};
  cout << (sol.canFinish(numCourses, prerequisites) ? "true" : "false") << endl;

  prerequisites = {{1, 0}, {0, 1}};
  cout << (sol.canFinish(numCourses, prerequisites) ? "true" : "false") << endl;

  return 0;
}
