#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int rows = (int)matrix.size();
    int cols = (int)matrix[0].size();

    bool firstRowHasZero = false;
    bool firstColHasZero = false;

    for (int c = 0; c < cols; c++) {
      if (matrix[0][c] == 0) {
        firstRowHasZero = true;
        break;
      }
    }

    for (int r = 0; r < rows; r++) {
      if (matrix[r][0] == 0) {
        firstColHasZero = true;
        break;
      }
    }

    for (int r = 1; r < rows; r++) {
      for (int c = 1; c < cols; c++) {
        if (matrix[r][c] == 0) {
          matrix[r][0] = 0;
          matrix[0][c] = 0;
        }
      }
    }

    for (int r = 1; r < rows; r++) {
      if (matrix[r][0] == 0) {
        for (int c = 1; c < cols; c++) {
          matrix[r][c] = 0;
        }
      }
    }

    for (int c = 1; c < cols; c++) {
      if (matrix[0][c] == 0) {
        for (int r = 1; r < rows; r++) {
          matrix[r][c] = 0;
        }
      }
    }

    if (firstRowHasZero) {
      for (int c = 0; c < cols; c++) {
        matrix[0][c] = 0;
      }
    }

    if (firstColHasZero) {
      for (int r = 0; r < rows; r++) {
        matrix[r][0] = 0;
      }
    }
  }
};

int main() {
  Solution sol;

  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  sol.setZeroes(matrix);

  for (int i = 0; i < (int)matrix.size(); i++) {
    for (int j = 0; j < (int)matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}