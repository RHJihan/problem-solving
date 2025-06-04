#include <iostream>
#include <vector>
using namespace std;

int islandPerimeter(vector<vector<int>> &grid) {
  int perimeter = 0;
  int rows = (int)grid.size();
  int cols = (int)grid[0].size();

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (grid[i][j] == 1) {
        perimeter += 4;
        if (i > 0 && grid[i - 1][j] == 1) {
          perimeter--;
        }
        if (i < rows - 1 && grid[i + 1][j] == 1) {
          perimeter--;
        }
        if (j > 0 && grid[i][j - 1] == 1) {
          perimeter--;
        }
        if (j < cols - 1 && grid[i][j + 1] == 1) {
          perimeter--;
        }
      }
    }
  }
  return perimeter;
}

int main() {
  vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};

  cout << islandPerimeter(grid) << endl;

  return 0;
}