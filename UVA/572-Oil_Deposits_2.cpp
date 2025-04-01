#include <iostream>
#include <vector>
using namespace std;

int m, n;
vector<vector<char>> grid;
vector<vector<bool>> visited;

int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

void dfs(int x, int y) {
  visited[x][y] = true;
  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && grid[nx][ny] == '@') {
      dfs(nx, ny);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  while (cin >> m >> n) {
    if (m == 0) {
      break;
    }

    grid.assign(m, vector<char>(n));
    visited.assign(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> grid[i][j];
      }
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '@' && !visited[i][j]) {
          dfs(i, j);
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
