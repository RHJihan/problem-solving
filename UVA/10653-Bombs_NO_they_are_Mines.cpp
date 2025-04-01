#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Point {
  int x, y;
  int distance;
};

const int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int bfs(int r, int c, vector<vector<int>> &grid, Point start, Point destination) {
  vector<vector<bool>> visited(r, vector<bool>(c, false));
  queue<Point> q;
  
  q.push(start);
  visited[start.x][start.y] = true;

  while (!q.empty()) {
    Point current = q.front();
    q.pop();

    if (current.x == destination.x && current.y == destination.y) {
      return current.distance;
    }

    for (int i = 0; i < 4; i++) {
      int newX = current.x + directions[i][0];
      int newY = current.y + directions[i][1];

      if (newX >= 0 && newX < r && newY >= 0 && newY < c && !visited[newX][newY] && grid[newX][newY] == 0) {
        visited[newX][newY] = true;
        q.push({newX, newY, current.distance + 1});
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

  while (true) {
    int r, c;
    cin >> r >> c;

    if (r == 0 && c == 0) {
      break;
    }

    vector<vector<int>> grid(r, vector<int>(c, 0));

    int total_bomb_count;
    cin >> total_bomb_count;
    for (int i = 0; i < total_bomb_count; i++) {
      int row, bomb_count;
      cin >> row >> bomb_count;
      for (int j = 0; j < bomb_count; j++) {
        int col;
        cin >> col;
        grid[row][col] = 1;
      }
    }

    Point start, destination;
    cin >> start.x >> start.y;
    cin >> destination.x >> destination.y;

    start.distance = 0;

    cout << bfs(r, c, grid, start, destination) << endl;
  }

  return 0;
}
