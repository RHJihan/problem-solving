#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
vector<string> grid;
vector<vector<int>> dist;
int m, n;

bool valid(int x, int y) {
  return x >= 0 && x < m && y >= 0 && y < n;
}

void bfs(int sx, int sy) {
  queue<pair<int, int>> q;
  q.push({sx, sy});
  dist[sx][sy] = 0;

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (valid(nx, ny) && grid[nx][ny] != '#' && grid[nx][ny] != 'm' && dist[nx][ny] == -1) {
        dist[nx][ny] = dist[x][y] + 1;
        q.push({nx, ny});
      }
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  for (int test_case = 1; test_case <= t; test_case++) {
    cin >> m >> n;
    grid.assign(m, string());
    pair<int, int> home, a, b, c;

    for (int i = 0; i < m; i++) {
      cin >> grid[i];
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 'h')
          home = {i, j};
        if (grid[i][j] == 'a')
          a = {i, j};
        if (grid[i][j] == 'b')
          b = {i, j};
        if (grid[i][j] == 'c')
          c = {i, j};
      }
    }

    dist.assign(m, vector<int>(n, -1));

    bfs(home.first, home.second);

    int da = dist[a.first][a.second];
    int db = dist[b.first][b.second];
    int dc = dist[c.first][c.second];

    int result = max({da, db, dc});

    cout << "Case " << test_case << ": " << result << endl;
  }

  return 0;
}
