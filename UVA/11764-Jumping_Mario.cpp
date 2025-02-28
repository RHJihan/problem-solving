// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  for (int q = 1; q <= t; q++) {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
      cin >> heights[i];
    }

    int high = 0, low = 0;

    for (int i = 0; i < n - 1; ++i) {
      if (heights[i] < heights[i + 1]) {
        high++;
      } else if (heights[i] > heights[i + 1]) {
        low++;
      }
    }

    cout << "Case " << q << ": " << high << " " << low << '\n';
  }

  return 0;
}
