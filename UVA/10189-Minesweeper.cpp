#include <iostream>
#include <vector>
using namespace std;

int mine_count(const vector<vector<char>> &field, int x, int y, int n, int m) {
  int count = 0;
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int i = 0; i < 8; i++) {
    int newX = x + dx[i], newY = y + dy[i];
    if (newX >= 0 && newX < n && newY >= 0 && newY < m && field[newX][newY] == '*') {
      count++;
    }
  }
  return count;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int field_number = 1;

  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      break;
    }
    vector<vector<char>> field(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> field[i][j];
      }
    }

    if (field_number > 1) {
      cout << endl;
    }
    cout << "Field #" << field_number++ << ':' << endl;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (field[i][j] == '*') {
          cout << '*';
        } else {
          cout << mine_count(field, i, j, n, m);
        }
      }
      cout << endl;
    }
  }

  return 0;
}
