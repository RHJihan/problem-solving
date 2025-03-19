#include <iostream>
#include <queue>
using namespace std;

struct Position {
  int x, y;
};

bool is_valid(int x, int y) {
  return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int dx[8] = {2, 2, -2, -2, 1, -1, 1, -1};
  int dy[8] = {1, -1, 1, -1, 2, 2, -2, -2};

  string start, end;

  while (cin >> start >> end) {
    Position src = {start[0] - 'a', start[1] - '1'};
    Position dest = {end[0] - 'a', end[1] - '1'};

    if (src.x == dest.x && src.y == dest.y) {
      cout << "To get from " << start << " to " << end << " takes 0 knight moves." << endl;
      continue;
    }

    queue<pair<Position, int>> q;
    bool visited[8][8] = {false};

    q.push({src, 0});
    visited[src.x][src.y] = true;

    int moves = 0;
    bool found = false;

    while (!q.empty() && !found) {
      pair<Position, int> current = q.front();
      Position pos = current.first;
      moves = current.second;
      q.pop();

      for (int i = 0; i < 8; i++) {
        int nx = pos.x + dx[i];
        int ny = pos.y + dy[i];

        if (nx == dest.x && ny == dest.y) {
          moves++;
          found = true;
          break;
        }

        if (is_valid(nx, ny) && !visited[nx][ny]) {
          visited[nx][ny] = true;
          q.push({{nx, ny}, moves + 1});
        }
      }
    }

    cout << "To get from " << start << " to " << end << " takes " << moves << " knight moves." << endl;
  }

  return 0;
}
