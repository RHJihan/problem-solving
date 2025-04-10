// https://www.spoj.com/problems/KATHTHI/
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int bfs(int r, int c, vector<string> &grid) {
  vector<vector<int>> guards(r, vector<int>(c, 1e9));
  deque<pair<int, int>> dq;

  guards[0][0] = 0;
  dq.push_front({0, 0});

  while (!dq.empty()) {
    int x = dq.front().first;
    int y = dq.front().second;
    dq.pop_front();

    for (int i = 0; i < 4; ++i) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
        int kill = (grid[x][y] == grid[nx][ny]) ? 0 : 1;
        if (guards[x][y] + kill < guards[nx][ny]) {
          guards[nx][ny] = guards[x][y] + kill;
          if (kill == 0) {
            dq.push_front({nx, ny});
          } else {
            dq.push_back({nx, ny});
          }
        }
      }
    }
  }

  return guards[r - 1][c - 1];
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int r, c;
    cin >> r >> c;
    vector<string> grid(r);
    for (int i = 0; i < r; ++i) {
      cin >> grid[i];
    }
    cout << bfs(r, c, grid) << endl;
  }

  return 0;
}
