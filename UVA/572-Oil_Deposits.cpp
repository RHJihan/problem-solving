#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void bfs(int x, int y, vector<vector<char>> &grid, vector<vector<bool>> &visited, int m, int n) {
  queue<pair<int, int>> q;
  q.push({x, y});
  visited[x][y] = true;

  while (!q.empty()) {
    auto [cx, cy] = q.front();
    q.pop();

    for (int i = 0; i < 8; i++) {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && grid[nx][ny] == '@') {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  (void)!freopen("/home/jihan/Documents/problem-solving/output.txt", "w", stdout);
#endif

  int m, n;

  while (cin >> m >> n) {
    if (m == 0) {
      break;
    }

    vector<vector<char>> grid(m, vector<char>(n));

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> grid[i][j];
      }
    }

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int count = 0;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '@' && !visited[i][j]) {
          bfs(i, j, grid, visited, m, n);
          count++;
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}
