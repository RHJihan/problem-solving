#include <iostream>
#include <vector>
using namespace std;

const int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
const int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};

bool check(int x, int y, int ax, int ay) {
  return (x == ax || y == ay || x - y == ax - ay || x + y == ax + ay);
}

bool dfs(int x, int y, int cx, int cy, int ax, int ay, vector<vector<bool>> &visited, int n) {
  if (x == cx && y == cy) {
    return true;
  }

  visited[x][y] = true;

  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
      if (!visited[nx][ny] && !check(nx, ny, ax, ay)) {
        if (dfs(nx, ny, cx, cy, ax, ay, visited, n)) {
          return true;
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

  vector<vector<bool>> visited(n, vector<bool>(n, false));

  if (dfs(bx - 1, by - 1, cx - 1, cy - 1, ax - 1, ay - 1, visited, n)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
