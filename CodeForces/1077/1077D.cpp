#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 2e5 + 5;
int n, k, arr[N], counter[N], visited[N];

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    counter[arr[i]]++;
  }

  priority_queue<pair<int, pair<int, int>>> pq;

  for (int i = 0; i < n; i++) {
    if (!visited[arr[i]]) {
      pq.push({counter[arr[i]], {arr[i], 1}});
      visited[arr[i]] = 1;
    }
  }

  vector<int> t;

  while ((int)t.size() < k) {
    int value = pq.top().second.first;
    int used_times = pq.top().second.second;
    pq.pop();

    t.push_back(value);

    used_times++;
    int new_count = counter[value] / used_times;
    pq.push({new_count, {value, used_times}});
  }

  for (int i : t)
    cout << i << " ";
  cout << "\n";

  return 0;
}
