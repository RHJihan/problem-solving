class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j,
             int index) {
        if (index == (int)word.size()) {
            return true;
        }

        if (i < 0 || i >= (int)board.size() || j < 0 ||
            j >= (int)board[0].size() || board[i][j] != word[index]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        bool found = false;
        for (int d = 0; d < 4; d++) {
            int newRow = i + dir[d][0];
            int newCol = j + dir[d][1];
            if (dfs(board, word, newRow, newCol, index + 1)) {
                found = true;
                break;
            }
        }

        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = (int)board.size();
        int cols = (int)board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};