
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> w(N, vector<int>(N));
  vector<vector<int>> d(N, vector<int>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> w[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> d[i][j];
    }
  }

  int x = 0, y = 0;
  string moves;

  for (int i = 1; i < N; i++) {
    for (int j = 1; j < N; j++) {
      if (i == 0 && j == 0) {
        continue;
      }
      while (x < i) {
        moves += 'D';
        x++;
      }
      while (x > i) {
        moves += 'U';
        x--;
      }
      while (y < j) {
        moves += 'R';
        y++;
      }
      while (y > j) {
        moves += 'L';
        y--;
      }

      moves += '1';

      while (x > 0) {
        moves += 'U';
        x--;
      }
      while (y > 0) {
        moves += 'L';
        y--;
      }
    }
  }

  for (char c : moves)
    cout << c << endl;

  return 0;
}
