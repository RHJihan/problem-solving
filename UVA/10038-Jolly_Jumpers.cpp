// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif

  int n;
  while (cin >> n) {

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
      cin >> sequence[i];
    }
    if (n == 1) {
      cout << "Jolly" << endl;
      continue;
    }

    set<int> diff;
    for (int i = 1; i < n; i++) {
      int current_diff = abs(sequence[i] - sequence[i - 1]);
      if (current_diff >= 1 && current_diff <= n - 1) {
        diff.insert(current_diff);
      }
    }

    cout << (diff.size() == n - 1 ? "Jolly" : "Not jolly") << endl;
  }

  return 0;
}
