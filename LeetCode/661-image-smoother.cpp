class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = (int)img.size();
        int cols = (int)img[0].size();
        vector<vector<int>> result(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int total_sum = 0;
                int count = 0;

                for (int k = max(0, i - 1); k < min(rows, i + 2); k++) {
                    for (int l = max(0, j - 1); l < min(cols, j + 2); l++) {
                        total_sum += img[k][l];
                        count++;
                    }
                }

                result[i][j] = total_sum / count;
            }
        }

        return result;
    }
};