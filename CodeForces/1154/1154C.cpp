#include <algorithm>
#include <iostream>
using namespace std;

int schedule[7] = {0, 1, 2, 0, 2, 1, 0};

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int fish, rabbit, chicken;
  cin >> fish >> rabbit >> chicken;

  int full_week = min({fish / 3, rabbit / 2, chicken / 2});
  fish -= 3 * full_week;
  rabbit -= 2 * full_week;
  chicken -= 2 * full_week;

  int max_day = full_week * 7;

  int extra = 0;
  for (int start = 0; start < 7; start++) {
    int f = fish, r = rabbit, c = chicken;
    int days = 0;
    int day = start;

    while (true) {
      int type = schedule[day % 7];
      if (type == 0 && f > 0)
        f--;
      else if (type == 1 && r > 0)
        r--;
      else if (type == 2 && c > 0)
        c--;
      else
        break;
      days++;
      day++;
    }

    extra = max(extra, days);
  }

  cout << max_day + extra << endl;

  return 0;
}
