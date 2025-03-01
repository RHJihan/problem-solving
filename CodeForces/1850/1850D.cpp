// https://codeforces.com/contest/1850/problem/D
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> problems(n);

    for (int i = 0; i < n; i++) {
      cin >> problems[i];
    }

    sort(problems.begin(), problems.end());

    int max_valid_length = 1, current_length = 1;

    for (int i = 1; i < n; i++) {
      if (problems[i] - problems[i - 1] <= k) {
        current_length++;
      } else {
        max_valid_length = max(max_valid_length, current_length);
        current_length = 1;
      }
    }

    max_valid_length = max(max_valid_length, current_length);

    cout << (n - max_valid_length) << endl;
  }
  return 0;
}
