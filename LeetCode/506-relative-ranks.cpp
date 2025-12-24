class Solution {
public:
    string convert(int num) {
        string result = "";
        while (num > 0) {
            char digit = '0' + (num % 10);
            result = digit + result;
            num = num / 10;
        }
        return result;
    }

    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>());

        vector<string> rank(n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (score[i] == sorted[j]) {
                    if (j == 0) {
                        rank[i] = "Gold Medal";
                    } else if (j == 1) {
                        rank[i] = "Silver Medal";
                    } else if (j == 2) {
                        rank[i] = "Bronze Medal";
                    } else {
                        rank[i] = convert(j + 1);
                    }
                    break;
                }
            }
        }

        return rank;
    }
};