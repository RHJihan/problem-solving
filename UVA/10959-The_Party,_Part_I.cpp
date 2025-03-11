#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> bfs(vector<vector<int>> &adjacency_list) {
  vector<int> giovanni_numbers((int)adjacency_list.size(), -1);
  queue<int> q;

  giovanni_numbers[0] = 0;
  q.push(0);

  while (!q.empty()) {
    int person = q.front();
    q.pop();

    for (int i = 0; i < (int)adjacency_list[person].size(); i++) {
      int working_node = adjacency_list[person][i];
      if (giovanni_numbers[working_node] == -1) {
        giovanni_numbers[working_node] = giovanni_numbers[person] + 1;
        q.push(working_node);
      }
    }
  }

  return giovanni_numbers;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
//   (void)!freopen("/home/jihan/Documents/problem-solving/output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int p, d;
    cin >> p >> d;
    vector<vector<int>> adjacency_list(p);

    for (int j = 0; j < d; j++) {
      int a, b;
      cin >> a >> b;
      adjacency_list[a].push_back(b);
      adjacency_list[b].push_back(a);
    }

    vector<int> result = bfs(adjacency_list);
    if (i != 0) {
      cout << endl;
    }
    for (int j = 1; j < p; j++) {
      cout << result[j] << endl;
    }
  }

  return 0;
}
