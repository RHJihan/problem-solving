#include <iostream>
#include <vector>
using namespace std;

bool all_edge_color(const vector<vector<char>> &grid, int rows, int cols, char color) {
  bool top_edge = false, bottom_edge = false, left_edge = false, right_edge = false;

  for (int j = 0; j < cols; j++) {
    if (grid[0][j] == color) {
      top_edge = true;
      break;
    }
  }

  for (int j = 0; j < cols; j++) {
    if (grid[rows - 1][j] == color) {
      bottom_edge = true;
      break;
    }
  }

  for (int i = 0; i < rows; i++) {
    if (grid[i][0] == color) {
      left_edge = true;
      break;
    }
  }

  for (int i = 0; i < rows; i++) {
    if (grid[i][cols - 1] == color) {
      right_edge = true;
      break;
    }
  }

  return top_edge && bottom_edge && left_edge && right_edge;
}

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

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
      string row;
      cin >> row;
      for (int j = 0; j < m; j++) {
        grid[i][j] = row[j];
      }
    }

    if (all_edge_color(grid, n, m, 'W') || all_edge_color(grid, n, m, 'B')) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
