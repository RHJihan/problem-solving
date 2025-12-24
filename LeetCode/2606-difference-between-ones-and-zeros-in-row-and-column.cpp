class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> onesRow(m, 0);
        vector<int> onesCol(n, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    onesRow[i]++;
            }
        }

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1)
                    onesCol[j]++;
            }
        }

        vector<vector<int>> result(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = onesRow[i] + onesCol[j] -
                               ((n - onesRow[i]) + (m - onesCol[j]));
            }
        }

        return result;
    }
};