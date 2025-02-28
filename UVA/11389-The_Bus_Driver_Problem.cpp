// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2384
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif

  while (true) {
    int n, d, r;
    cin >> n >> d >> r;

    if (n == 0 && d == 0 && r == 0) {
      break;
    }

    vector<int> morning(n);
    vector<int> evening(n);
    vector<int> evening_rev;

    for (int i = 0; i < n; i++) {
      cin >> morning[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> evening[i];
    }

    sort(morning.begin(), morning.end());
    sort(evening.begin(), evening.end());

    for (int i = n - 1; i >= 0; i--) {
      evening_rev.push_back(evening[i]);
    }

    int overtime = 0;

    for (int i = 0; i < n; i++) {
      int total_route = morning[i] + evening_rev[i];
      if (total_route > d) {
        overtime += (total_route - d) * r;
      }
    }

    cout << overtime << '\n';
  }

  return 0;
}
