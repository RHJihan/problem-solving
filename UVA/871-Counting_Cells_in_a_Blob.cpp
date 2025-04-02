#include <iostream>
#include <vector>
using namespace std;

int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int dfs(vector<vector<int>> &grid, int i, int j) {
  int m = (int)grid.size(), n = (int)grid[0].size();
  if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) {
    return 0;
  }

  grid[i][j] = 0;
  int size = 1;

  for (int k = 0; k < 8; k++) {
    size += dfs(grid, i + directions[k][0], j + directions[k][1]);
  }

  return size;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  cin.ignore();
  string line;
  getline(cin, line); 

  while (t--) {
    vector<vector<int>> grid;
    while (getline(cin, line) && !line.empty()) {
      vector<int> row;
      for (int i = 0; i < (int)line.size(); i++) {
        row.push_back(line[i] - '0');
      }
      grid.push_back(row);
    }

    int max_size = 0;
    int m = (int)grid.size(), n = (int)grid[0].size();

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          max_size = max(max_size, dfs(grid, i, j));
        }
      }
    }
    cout << max_size << endl;

    if (t) {
      cout << endl;
    }
  }
  return 0;
}
