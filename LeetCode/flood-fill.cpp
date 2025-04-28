#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &image, int x, int y, int sc, int color) {

  if (x < 0 || x >= (int)image.size() || y < 0 || y >= (int)image[0].size()) {
    return;
  }

  if (image[x][y] != sc) {
    return;
  }

  image[x][y] = color;

  dfs(image, x + 1, y, sc, color);
  dfs(image, x - 1, y, sc, color);
  dfs(image, x, y + 1, sc, color);
  dfs(image, x, y - 1, sc, color);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
  int original_color = image[sr][sc];
  if (original_color == color) {
    return image;
  }

  dfs(image, sr, sc, original_color, color);
  return image;
}

int main() {
  vector<vector<int>> image = {
      {1, 1, 1},
      {1, 1, 0},
      {1, 0, 1}};

  int sr = 1, sc = 1, color = 2;

  vector<vector<int>> result = floodFill(image, sr, sc, color);

  for (auto i = 0; i < (int)result.size(); i++) {
    for (int j = 0; j < (int)result[i].size(); j++) {
      int pixel = result[i][j];
      cout << pixel << " ";
    }
    cout << endl;
  }

  return 0;
}
