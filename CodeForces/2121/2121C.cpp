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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    int max_val = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
        if (matrix[i][j] > max_val) {
          max_val = matrix[i][j];
        }
      }
    }

    vector<pair<int, int>> max_pos;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == max_val) {
          max_pos.push_back({i, j});
        }
      }
    }

    bool possible = false;

    for (int i = 0; i < n && !possible; i++) {
      for (int j = 0; j < m && !possible; j++) {

        bool ok = true;
        for (auto [x, y] : max_pos) {
          if (x != i && y != j) {
            ok = false;
            break;
          }
        }
        if (ok) {
          possible = true;
        }
      }
    }

    if (possible) {
      cout << max_val - 1 << endl;
    } else {
      cout << max_val << endl;
    }
  }

  return 0;
}
