#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool Breadth_First_Search(vector<vector<int>> &adjacency_list, int n) {
  vector<int> color(n, -1);
  queue<int> q;

  color[0] = 0;
  q.push(0);

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
      int working_node = adjacency_list[current][i];
      if (color[working_node] == -1) {
        color[working_node] = 1 - color[current];
        q.push(working_node);
      } else if (color[working_node] == color[current]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n, l;

  while (cin >> n) {
    if (n == 0) {
      break;
    }

    cin >> l;
    vector<vector<int>> graph(n);

    for (int i = 0; i < l; i++) {
      int a, b;
      cin >> a >> b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }

    if (Breadth_First_Search(graph, n)) {
      cout << "BICOLORABLE." << endl;
    } else {
      cout << "NOT BICOLORABLE." << endl;
    }
  }

  return 0;
}
