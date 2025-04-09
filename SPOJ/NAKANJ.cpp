#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};


bool valid(int x, int y) {
  return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int bfs(string start, string dest) {
  int start_x = start[0] - 'a';
  int start_y = start[1] - '1';
  int dest_x = dest[0] - 'a';
  int dest_y = dest[1] - '1';

  vector<vector<bool>> visited(8, vector<bool>(8, false));

  queue<pair<pair<int, int>, int>> q;
  q.push({{start_x, start_y}, 0});
  visited[start_x][start_y] = true;

  while (!q.empty()) {
    auto current = q.front();
    q.pop();

    int x = current.first.first;
    int y = current.first.second;
    int steps = current.second;

    if (x == dest_x && y == dest_y) {
      return steps;
    }

    for (int i = 0; i < 8; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (valid(nx, ny) && !visited[nx][ny]) {
        visited[nx][ny] = true;
        q.push({{nx, ny}, steps + 1});
      }
    }
  }

  return -1; 
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    string start, dest;
    cin >> start >> dest;
    cout << bfs(start, dest) << endl;
  }

  return 0;
}
