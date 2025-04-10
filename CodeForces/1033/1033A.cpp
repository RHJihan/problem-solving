#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
const int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};

bool check(int x, int y, int ax, int ay) {
  return (x == ax || y == ay || x - y == ax - ay || x + y == ax + ay);
}

bool bfs(int n, int ax, int ay, int bx, int by, int cx, int cy) {
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  queue<pair<int, int>> q;

  q.push({bx, by});
  visited[bx][by] = true;

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();

    if (x == cx && y == cy) {
      return true;
    }

    for (int i = 0; i < 8; ++i) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
        if (!check(nx, ny, ax, ay)) {
          visited[nx][ny] = true;
          q.push({nx, ny});
        }
      }
    }
  }

  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  int ax, ay;
  cin >> ax >> ay;

  int bx, by;
  cin >> bx >> by;

  int cx, cy;
  cin >> cx >> cy;

  if (bfs(n, ax - 1, ay - 1, bx - 1, by - 1, cx - 1, cy - 1)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
