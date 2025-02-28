// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2515
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<string> &grid, int n, int row, int col, char letter) {
  if (row > 0 && grid[row - 1][col] == letter)
    return false;
  if (row < n - 1 && grid[row + 1][col] == letter)
    return false;
  if (col > 0 && grid[row][col - 1] == letter)
    return false;
  if (col < n - 1 && grid[row][col + 1] == letter)
    return false;
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt", "w", stdout);
#endif

  int t; 
  cin >> t;

  for (int case_count = 1; case_count <= t; case_count++) {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
      cin >> grid[i];
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '.') {
          for (char letter = 'A'; letter <= 'Z'; letter++) {
            if (isValid(grid, n, i, j, letter)) {
              grid[i][j] = letter;
              break;
            }
          }
        }
      }
    }

    cout << "Case " << case_count << ":" << '\n';
    for (int i = 0; i < n; i++) {
      cout << grid[i] << '\n';
    }
  }

  return 0;
}
