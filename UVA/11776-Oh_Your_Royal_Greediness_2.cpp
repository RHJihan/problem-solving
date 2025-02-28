// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2876
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif
  int case_number = 1;
  while (true) {
    int n;
    cin >> n;
    if (n == -1) {
      break;
    }

    if (n == 0) {
      cout << "Case " << case_number << ": " << 0 << endl;
      case_number++;
      continue;
    }

    vector<pair<int, int>> events;

    for (int i = 0; i < n; i++) {
      int s, e;
      cin >> s >> e;
      events.push_back({s, +1});
      events.push_back({e + 1, -1});
    }

    sort(events.begin(), events.end(), [](pair<int, int> a, pair<int, int> b) {
      return a.first < b.first || (a.first == b.first && a.second < b.second);
    });

    int max_count = 0, current_count = 0;

    for (int i = 0; i < events.size(); i++) {
      current_count += events[i].second;
      max_count = max(max_count, current_count);
    }

    cout << "Case " << case_number << ": " << max_count << endl;
    case_number++;
  }

  return 0;
}
