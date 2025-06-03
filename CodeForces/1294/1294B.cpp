#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<pair<int, int>> packages(n);

    for (int i = 0; i < n; i++) {
      cin >> packages[i].first >> packages[i].second;
    }

    sort(packages.begin(), packages.end());

    bool possible = true;
    int current_x = 0, current_y = 0;
    string path = "";

    for (int i = 0; i < n; i++) {
      int target_x = packages[i].first;
      int target_y = packages[i].second;

      if (target_x < current_x || target_y < current_y) {
        possible = false;
        break;
      }

      for (int r = 0; r < target_x - current_x; r++) {
        path += 'R';
      }

      for (int u = 0; u < target_y - current_y; u++) {
        path += 'U';
      }

      current_x = target_x;
      current_y = target_y;
    }

    if (possible) {
      cout << "YES" << endl;
      cout << path << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
