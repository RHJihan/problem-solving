class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<vector<int>> positions(26);

        for (int i = 0; i < s.length(); i++) {
            positions[s[i] - 'a'].push_back(i);
        }

        int answer = 0;

        for (int c = 0; c < 26; c++) {
            auto& idx = positions[c];

            if (idx.size() < 2)
                continue;

            int left = idx[0];
            int right = idx[idx.size() - 1];

            if (right - left <= 1)
                continue;

            set<char> middleLetters;

            for (int i = left + 1; i < right; i++) {
                middleLetters.insert(s[i]);
            }

            answer += middleLetters.size();
        }

        return answer;
    }
};
