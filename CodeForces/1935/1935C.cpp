#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    int l;
    cin >> n >> l;

    vector<pair<int, int>> messages(n);

    for (int i = 0; i < n; ++i) {
      int a, b;
      cin >> a >> b;
      messages[i] = {b, a};
    }

    sort(messages.begin(), messages.end());

    int result = 0;

    for (int i = 0; i < n; ++i) {
      priority_queue<int> selected;
      int sum_a = 0;

      for (int j = i; j < n; ++j) {
        selected.push(messages[j].second);
        sum_a += messages[j].second;

        int diff = messages[j].first - messages[i].first;
        int total = sum_a + diff;

        while (total > l && !selected.empty()) {
          sum_a -= selected.top();
          selected.pop();
          total = sum_a + diff;
        }

        result = max(result, (int)selected.size());
      }
    }

    cout << result << endl;
  }

  return 0;
}
