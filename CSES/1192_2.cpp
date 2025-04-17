#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAX = 1000;
int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool valid(int x, int y) {
  return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y];
}

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});
  visited[x][y] = true;

  while (!q.empty()) {
    auto [cx, cy] = q.front();
    q.pop();

    for (int dir = 0; dir < 4; ++dir) {
      int nx = cx + dx[dir];
      int ny = cy + dy[dir];
      if (valid(nx, ny)) {
        visited[nx][ny] = true;
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

  cin >> n >> m;
  grid.resize(n);
  visited.assign(n, vector<bool>(m, false));

  for (int i = 0; i < n; ++i) {
    cin >> grid[i];
  }

  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (valid(i, j)) {
        bfs(i, j);
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}
