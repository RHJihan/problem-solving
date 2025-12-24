class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int top = 0, bottom = ROWS - 1;
        int expected;

        while (top <= bottom) {
            expected = (top + bottom) / 2;
            if (target > matrix[expected][COLS - 1]) {
                top = expected + 1;
            } else if (target < matrix[expected][0]) {
                bottom = expected - 1;
            } else {
                break;
            }
        }

        int l = 0, r = COLS - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (target > matrix[expected][m]) {
                l = m + 1;
            } else if (target < matrix[expected][m]) {
                r = m - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};