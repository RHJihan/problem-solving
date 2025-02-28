// https://codeforces.com/contest/822/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  int min_change = INT_MAX;
  vector<int> min_pos;

  for (int i = 0; i <= m - n; i++) {
    vector<int> current_pos;
    int change = 0;

    for (int j = 0; j < n; j++) {
      if (s[j] != t[i + j]) {
        change++;
        current_pos.push_back(j + 1);
      }
    }

    if (change < min_change) {
      min_change = change;
      min_pos = current_pos;
    }
  }

  cout << min_change << '\n';

  for (int i = 0; i < min_pos.size(); i++) {
    cout << min_pos[i] << " ";
  }
  cout << '\n';

  return 0;
}
