#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> Breadth_First_Search(const vector<vector<int>> &adjacency_list, int start_node) {
  vector<int> distance(adjacency_list.size(), -1);
  queue<int> queue;
  distance[start_node] = 0;
  queue.push(start_node);

  while (!queue.empty()) {
    int current = queue.front();
    queue.pop();

    for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
      int working_node = adjacency_list[current][i];
      if (distance[working_node] == -1) {
        distance[working_node] = distance[current] + 1;
        queue.push(working_node);
      }
    }
  }

  return distance;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  int case_num = 1;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjacency_list(n);

    for (int i = 0; i < m; ++i) {
      int u, v;
      cin >> u >> v;
      adjacency_list[u].push_back(v);
      adjacency_list[v].push_back(u);
    }

    int s, d;
    cin >> s >> d;

    vector<int> dist_from_start = Breadth_First_Search(adjacency_list, s);

    vector<int> dist_from_destination = Breadth_First_Search(adjacency_list, d);

    int max_time = 0;
    for (int i = 0; i < n; i++) {
      int time_to_complete_task = dist_from_start[i] + dist_from_destination[i];
      max_time = max(max_time, time_to_complete_task);
    }

    cout << "Case " << case_num << ": " << max_time << endl;
    case_num++;
  }

  return 0;
}
