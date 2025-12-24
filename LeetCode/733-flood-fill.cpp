class Solution {
public:
    void dfs(vector<vector<int>>& image, int x, int y, int sc, int color) {

        if (x < 0 || x >= (int)image.size() || y < 0 ||
            y >= (int)image[0].size()) {
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

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int original_color = image[sr][sc];
        if (original_color == color) {
            return image;
        }

        dfs(image, sr, sc, original_color, color);
        return image;
    }
};