#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int bfs(const vector<vector<int>> &adjacency_list, int start, int end) {
  vector<int> distance(21, -1);
  queue<int> q;

  q.push(start);
  distance[start] = 0;

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
      int working_node = adjacency_list[current][i];
      if (distance[working_node] == -1) {
        distance[working_node] = distance[current] + 1;
        q.push(working_node);
        if (working_node == end) {
          return distance[working_node];
        }
      }
    }
  }
  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int test_case = 1;

  while (true) {
    vector<vector<int>> adjacency_list(21);

    for (int i = 1; i <= 19; ++i) {
      int x;
      if (!(cin >> x)) {
        return 0;
      }

      for (int j = 0; j < x; ++j) {
        int input;
        cin >> input;
        adjacency_list[i].push_back(input);
        adjacency_list[input].push_back(i);
      }
    }

    int q;
    cin >> q;

    vector<pair<int, int>> queries;
    for (int i = 0; i < q; i++) {
      int a, b;
      cin >> a >> b;
      queries.emplace_back(a, b);
    }

    cout << "Test Set #" << test_case++ << endl;

    for (int i = 0; i < (int)queries.size(); i++) {
      pair<int, int> current = queries[i];

      int result = bfs(adjacency_list, current.first, current.second);
      cout << setw(2) << current.first << " to " << setw(2) << current.second << ": " << result << "\n";
    }

    cout << endl;
  }

  return 0;
}
