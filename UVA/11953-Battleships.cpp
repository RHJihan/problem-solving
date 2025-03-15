#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<vector<char>> &grid, int x, int y, int n, bool &has_alive_part) {
  queue<pair<int, int>> q;
  q.push({x, y});

  int dx[] = {1, -1, 0, 0};
  int dy[] = {0, 0, 1, -1};

  while (!q.empty()) {
    pair<int, int> current = q.front();
    int cx = current.first, cy = current.second;
    q.pop();

    if (grid[cx][cy] == 'x') {
      has_alive_part = true;
    }

    grid[cx][cy] = '.';

    for (int i = 0; i < 4; i++) {
      int nx = cx + dx[i], ny = cy + dy[i];

      if (nx >= 0 && nx < n && ny >= 0 && ny < n && (grid[nx][ny] == 'x' || grid[nx][ny] == '@')) {
        q.push({nx, ny});
      }
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
//   (void)!freopen("/home/jihan/Documents/problem-solving/output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        cin >> grid[j][k];
      }
    }

    int total_alive = 0;
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (grid[j][k] == 'x' || grid[j][k] == '@') {
          bool has_alive_part = false;
          bfs(grid, j, k, n, has_alive_part);
          if (has_alive_part) {
            total_alive++;
          }
        }
      }
    }
    cout << "Case " << i << ": " << total_alive << endl;
  }

  return 0;
}
