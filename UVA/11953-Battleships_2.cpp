#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int n) {
  visited[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny] && (grid[nx][ny] == 'x' || grid[nx][ny] == '@')) {
      dfs(nx, ny, n);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  for (int case_count = 1; case_count <= t; case_count++) {
    int n;
    cin >> n;

    grid.assign(n, vector<char>(n));
    visited.assign(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> grid[i][j];
      }
    }

    int total_alive = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 'x' && !visited[i][j]) { 
          dfs(i, j, n);
          total_alive++; 
        }
      }
    }

    cout << "Case " << case_count << ": " << total_alive << endl;
  }
  return 0;
}
