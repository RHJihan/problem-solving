class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {

        vector<vector<int>> grid(m, vector<int>(n, 0));

        for (int i = 0; i < walls.size(); i++) {
            int x = walls[i][0];
            int y = walls[i][1];
            grid[x][y] = 3;
        }

        for (int i = 0; i < guards.size(); i++) {
            int x = guards[i][0];
            int y = guards[i][1];
            grid[x][y] = 2;
        }

        // left to right
        for (int i = 0; i < m; ++i) {
            bool seen = false;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 3)
                    seen = false;
                else if (grid[i][j] == 2)
                    seen = true;
                else if (seen)
                    grid[i][j] = 1;
            }
        }

        // right to left
        for (int i = 0; i < m; ++i) {
            bool seen = false;
            for (int j = n - 1; j >= 0; --j) {
                if (grid[i][j] == 3)
                    seen = false;
                else if (grid[i][j] == 2)
                    seen = true;
                else if (seen)
                    grid[i][j] = 1;
            }
        }

        // top to bottom
        for (int j = 0; j < n; ++j) {
            bool seen = false;
            for (int i = 0; i < m; ++i) {
                if (grid[i][j] == 3)
                    seen = false;
                else if (grid[i][j] == 2)
                    seen = true;
                else if (seen)
                    grid[i][j] = 1;
            }
        }

        // bottom to top
        for (int j = 0; j < n; ++j) {
            bool seen = false;
            for (int i = m - 1; i >= 0; --i) {
                if (grid[i][j] == 3)
                    seen = false;
                else if (grid[i][j] == 2)
                    seen = true;
                else if (seen)
                    grid[i][j] = 1;
            }
        }

        int count = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (grid[i][j] == 0)
                    count++;

        return count;
    }
};