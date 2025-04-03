#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int dx[] = {-1, 0, 1, 0};
  int dy[] = {0, 1, 0, -1};
  char dir_char[] = {'N', 'E', 'S', 'W'};

  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    int row, col;
    cin >> row >> col;
    cin.ignore();

    vector<vector<char>> maze(row, vector<char>(col));
    for (int i = 0; i < row; i++) {
      string line;
      getline(cin, line);
      for (int j = 0; j < col; j++) {
        maze[i][j] = line[j];
      }
    }

    int x, y;
    cin >> x >> y;
    cin.ignore();
    x--, y--;
    int direction = 0;

    string commands, temp;
    while (getline(cin, temp) && !temp.empty()) {
      commands += temp;
    }

    for (int i = 0; i < (int)commands.size(); i++) {
      if (commands[i] == 'R') {
        direction = (direction + 1) % 4;
      } else if (commands[i] == 'L') {
        direction = (direction + 3) % 4;
      } else if (commands[i] == 'F') {
        int nx = x + dx[direction];
        int ny = y + dy[direction];
        if (maze[nx][ny] != '*') {
          x = nx;
          y = ny;
        }
      } else if (commands[i] == 'Q') {
        cout << x + 1 << " " << y + 1 << " " << dir_char[direction] << endl;
        break;
      }
    }

    if (t) {
      cout << endl;
    }
  }
  return 0;
}