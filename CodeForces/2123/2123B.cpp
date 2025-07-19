#include <climits>
#include <iostream>
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
    int n, j, k;
    cin >> n >> j >> k;

    vector<int> players(n);
    int max_strength = INT_MIN;

    for (int i = 0; i < n; i++) {
      cin >> players[i];
      max_strength = max(max_strength, players[i]);
    }

    if (players[j - 1] == max_strength) {
      cout << "YES" << endl;
      continue;
    }

    if (k == 1) {
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;
  }

  return 0;
}
