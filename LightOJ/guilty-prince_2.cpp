#include <iostream>
#include <queue>
using namespace std;

const int MAX = 25;
char grid[MAX][MAX];
bool visited[MAX][MAX];
int w, h;
int dx[] = {0, 0, 1, -1}; 
int dy[] = {1, -1, 0, 0};

struct cell {
  int x, y;
};

int bfs(int start_x, int start_y) {
  queue<cell> q;
  q.push({start_x, start_y});
  visited[start_x][start_y] = true;
  int count = 1;

  while (!q.empty()) {
    cell current = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = current.x + dx[i];
      int ny = current.y + dy[i];

      if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
        if (!visited[nx][ny] && grid[nx][ny] == '.') {
          visited[nx][ny] = true;
          q.push({nx, ny});
          count++;
        }
      }
    }
  }

  return count;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  int case_number = 1;

  while (t--) {
    cin >> w >> h;
    int start_x = 0, start_y = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> grid[i][j];
        visited[i][j] = false;

        if (grid[i][j] == '@') {
          start_x = i;
          start_y = j;
        }
      }
    }

    int reachable_cells = bfs(start_x, start_y);
    cout << "Case " << case_number++ << ": " << reachable_cells << endl;
  }

  return 0;
}
