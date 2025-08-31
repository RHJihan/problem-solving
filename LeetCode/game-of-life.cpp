#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int countNeighbors(vector<vector<int>> &board, int r, int c, int rows, int cols) {
    int neighbors = 0;

    for (int i = r - 1; i <= r + 1; i++) {
      for (int j = c - 1; j <= c + 1; j++) {

        if (i == r && j == c) {
          continue;
        }
        if (i < 0 || j < 0 || i >= rows || j >= cols) {
          continue;
        }
        if (board[i][j] == 1 || board[i][j] == 3) {
          neighbors++;
        }
      }
    }

    return neighbors;
  }

  void gameOfLife(vector<vector<int>> &board) {
    int rows = board.size();
    int cols = board[0].size();

    for (int r = 0; r < rows; r++) {
      for (int c = 0; c < cols; c++) {
        int neighbors = countNeighbors(board, r, c, rows, cols);

        if (board[r][c] == 1) {

          if (neighbors < 2 || neighbors > 3) {
            board[r][c] = 3;
          }
        } else {

          if (neighbors == 3) {
            board[r][c] = 2;
          }
        }
      }
    }

    for (int r = 0; r < rows; r++) {
      for (int c = 0; c < cols; c++) {
        if (board[r][c] == 1) {
          board[r][c] = 1;
        } else if (board[r][c] == 2) {
          board[r][c] = 1;
        } else if (board[r][c] == 3) {
          board[r][c] = 0;
        } else {
          board[r][c] = 0;
        }
      }
    }
  }
};

int main() {
  vector<vector<int>> matrix = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
  Solution sol;
  sol.gameOfLife(matrix);
  return 0;
}