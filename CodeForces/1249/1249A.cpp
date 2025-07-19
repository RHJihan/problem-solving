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

    vector<int> skills(n);

    for (int i = 0; i < n; i++) {
      cin >> skills[i];
    }

    sort(skills.begin(), skills.end());

    bool has_adjacent = false;
    for (int i = 0; i < n - 1; i++) {
      if (skills[i + 1] - skills[i] == 1) {
        has_adjacent = true;
        break;
      }
    }

    if (has_adjacent) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }

  return 0;
}
