#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int m, n;
vector<string> grid;
vector<vector<int>> dist;

bool valid(int x, int y) {
  return x >= 0 && x < m && y >= 0 && y < n;
}

void dfs(int x, int y, int steps) {
  if (!valid(x, y) || grid[x][y] == '#' || grid[x][y] == 'm') {
    return;
  }
  if (steps >= dist[x][y]) {
    return;
  }

  dist[x][y] = steps;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    dfs(nx, ny, steps + 1);
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  for (int case_num = 1; case_num <= t; case_num++) {
    cin >> m >> n;
    grid.assign(m, "");
    dist.assign(m, vector<int>(n, INT_MAX));

    pair<int, int> pos_a, pos_b, pos_c, home;

    for (int i = 0; i < m; i++) {
      cin >> grid[i];
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 'a')
          pos_a = {i, j};
        else if (grid[i][j] == 'b')
          pos_b = {i, j};
        else if (grid[i][j] == 'c')
          pos_c = {i, j};
        else if (grid[i][j] == 'h')
          home = {i, j};
      }
    }

    dfs(home.first, home.second, 0);

    int da = dist[pos_a.first][pos_a.second];
    int db = dist[pos_b.first][pos_b.second];
    int dc = dist[pos_c.first][pos_c.second];

    int result = max({da, db, dc});

    cout << "Case " << case_num << ": " << result << endl;
  }

  return 0;
}
