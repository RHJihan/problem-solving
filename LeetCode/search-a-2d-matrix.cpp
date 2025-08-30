#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int ROWS = matrix.size();
    int COLS = matrix[0].size();

    int top = 0, bot = ROWS - 1;
    int row;

    while (top <= bot) {
      row = (top + bot) / 2;
      if (target > matrix[row][COLS - 1]) {
        top = row + 1;
      } else if (target < matrix[row][0]) {
        bot = row - 1;
      } else {
        break;
      }
    }

    if (!(top <= bot)) {
      return false;
    }

    row = (top + bot) / 2;

    int l = 0, r = COLS - 1;
    while (l <= r) {
      int m = (l + r) / 2;
      if (target > matrix[row][m]) {
        l = m + 1;
      } else if (target < matrix[row][m]) {
        r = m - 1;
      } else {
        return true;
      }
    }

    return false;
  }
};

int main() {
  Solution sol;

  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << sol.searchMatrix(matrix, 0) << endl;

  return 0;
}