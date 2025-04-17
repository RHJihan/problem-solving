#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool valid(int x, int y, int n, vector<string> &grid, vector<vector<bool>> &visited) {
  return (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == '1' && !visited[x][y]);
}

void bfs(int startX, int startY, int n, vector<string> &grid, vector<vector<bool>> &visited) {
  queue<pair<int, int>> q;
  q.push({startX, startY});
  visited[startX][startY] = true;

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();

    for (int dir = 0; dir < 8; dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if (valid(nx, ny, n, grid, visited)) {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int n;
  int image_count = 1;

  while (cin >> n) {
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
      cin >> grid[i];
    }

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int count = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '1' && !visited[i][j]) {
          bfs(i, j, n, grid, visited);
          count++;
        }
      }
    }

    cout << "Image number " << image_count++ << " contains " << count << " war eagles." << endl;
  }

  return 0;
}
