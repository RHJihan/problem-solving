#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

vector<int> Breadth_First_Search(const vector<vector<int>> &adjacency_list, int start_node) {
  vector<int> days_to_reach(adjacency_list.size(), -1);
  queue<int> queue;
  days_to_reach[start_node] = 0;
  queue.push(start_node);

  while (!queue.empty()) {
    int current = queue.front();
    queue.pop();

    for (int i = 0; i < (int)adjacency_list[current].size(); i++) {
      int neighbor = adjacency_list[current][i];
      if (days_to_reach[neighbor] == -1) {
        days_to_reach[neighbor] = days_to_reach[current] + 1;
        queue.push(neighbor);
      }
    }
  }

  return days_to_reach;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
//   (void)!freopen("/home/jihan/Documents/problem-solving/output.txt", "w", stdout);
#endif

  int e;
  cin >> e;
  vector<vector<int>> adjacency_list(e);

  for (int i = 0; i < e; i++) {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
      int input;
      cin >> input;
      adjacency_list[i].push_back(input);
    }
  }

  int t;
  cin >> t;
  while (t--) {
    int source;
    cin >> source;

    vector<int> days_to_reach = Breadth_First_Search(adjacency_list, source);

    map<int, int> boom_count;

    for (int i = 0; i < e; i++) {
      if (days_to_reach[i] > 0) {
        boom_count[days_to_reach[i]]++;
      }
    }

    int max_boom_size = 0, first_boom_day = 0;
    for (auto it = boom_count.begin(); it != boom_count.end(); it++) {

      if (it->second > max_boom_size) {
        max_boom_size = it->second;
        first_boom_day = it->first;
      }
    }

    if (max_boom_size == 0) {
      cout << "0" << endl;
    } else {
      cout << max_boom_size << " " << first_boom_day << endl;
    }
  }

  return 0;
}
