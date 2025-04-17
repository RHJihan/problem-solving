#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int bfs(vector<vector<int>> &grid, int i, int j) {
  int m = (int)grid.size();
  int n = (int)grid[0].size();
  int size = 0;

  queue<pair<int, int>> q;
  q.push({i, j});
  grid[i][j] = 0;

  while (!q.empty()) {
    pair<int, int> cell = q.front();
    q.pop();
    size++;

    for (int k = 0; k < 8; k++) {
      int ni = cell.first + directions[k][0];
      int nj = cell.second + directions[k][1];

      if (ni >= 0 && nj >= 0 && ni < m && nj < n && grid[ni][nj] == 1) {
        q.push({ni, nj});
        grid[ni][nj] = 0;
      }
    }
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

    int max_blob = 0;
    int m = (int)grid.size();
    int n = (int)grid[0].size();

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          max_blob = max(max_blob, bfs(grid, i, j));
        }
      }
    }

    cout << max_blob << endl;

    if (t) {
      cout << endl;
    }
  }

  return 0;
}
