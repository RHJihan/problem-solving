#include <algorithm>
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
    int n;
    cin >> n;

    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
      cin >> piles[i];
    }

    piles.push_back(0);
    sort(piles.begin(), piles.end());

    int steps = 0;

    for (int i = 1; i < n; i++) {
      if (piles[i] - piles[i - 1] > 1 || piles[i] == piles[n]) {
        break;
      } else if (piles[i] - piles[i - 1] == 1) {
        steps++;
      }
    }

    if (steps % 2 == 1) {
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }

  return 0;
}
