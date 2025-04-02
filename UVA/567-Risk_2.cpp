#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void dfs(const vector<vector<int>> &adjacency_list, vector<int> &distance, int current, int end, int depth) {
  if (distance[current] <= depth && distance[current] != -1) {
    return;
  }

  distance[current] = depth;

  if (current == end) {
    return;
  }

  for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
    int neighbor = adjacency_list[current][i];
    dfs(adjacency_list, distance, neighbor, end, depth + 1);
  }
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
      vector<int> distance(21, -1);
      dfs(adjacency_list, distance, current.first, current.second, 0);
      cout << setw(2) << current.first << " to " << setw(2) << current.second << ": " << distance[current.second] << "\n";
    }

    cout << endl;
  }

  return 0;
}
