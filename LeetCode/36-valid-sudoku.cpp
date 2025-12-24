class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            vector<int> rowCount(10, 0);
            vector<int> colCount(10, 0);

            for (int j = 0; j < 9; j++) {

                char rowChar = board[i][j];
                if (rowChar != '.') {
                    int num = rowChar - '0';
                    rowCount[num]++;
                    if (rowCount[num] > 1) {
                        return false;
                    }
                }

                char colChar = board[j][i];
                if (colChar != '.') {
                    int num = colChar - '0';
                    colCount[num]++;
                    if (colCount[num] > 1) {
                        return false;
                    }
                }
            }
        }

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                vector<int> boxCount(10, 0);

                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {
                        char ch = board[i][j];
                        if (ch != '.') {
                            int num = ch - '0';
                            boxCount[num]++;
                            if (boxCount[num] > 1) {
                                return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};