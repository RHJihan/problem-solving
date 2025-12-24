class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int> freq;

        for (char c : word) {
            freq[c]++;
        }
        int result = (int)word.size();
        for (auto a : freq) {
            int rm = 0;
            for (auto b : freq) {
                if (a.second > b.second) {
                    rm += b.second;
                } else if (b.second > a.second + k) {
                    rm += b.second - (a.second + k);
                }
            }
            result = min(rm, result);
        }

        return result;
    }
};