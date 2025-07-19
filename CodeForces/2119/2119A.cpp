#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int solve(int a, int b, int x, int y) {
  vector<int> cost(102, INT_MAX);
  cost[a] = 0;

  queue<int> q;
  q.push(a);

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    if (current == b) {
      return cost[current];
    }

    if (current + 1 < 102 && cost[current] + x < cost[current + 1]) {
      cost[current + 1] = cost[current] + x;
      q.push(current + 1);
    }

    int next = current ^ 1;
    if (next < 102 && cost[current] + y < cost[next]) {
      cost[next] = cost[current] + y;
      q.push(next);
    }
  }

  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << solve(a, b, x, y) << endl;
  }
  return 0;
}
