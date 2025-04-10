#include <iostream>
using namespace std;

const int MAX = 25;
char grid[MAX][MAX];
bool visited[MAX][MAX];
int W, H;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int count;

void dfs(int x, int y) {
  visited[x][y] = true;
  count++;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
      if (!visited[nx][ny] && grid[nx][ny] == '.') {
        dfs(nx, ny);
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
  int case_count = 1;
  while (t--) {
    cin >> W >> H;

    int start_x = 0, start_y = 0;
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        cin >> grid[i][j];
        visited[i][j] = false;

        if (grid[i][j] == '@') {
          start_x = i;
          start_y = j;
        }
      }
    }

    count = 0;
    dfs(start_x, start_y);

    cout << "Case " << case_count++ << ": " << count << endl;
  }

  return 0;
}
