class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26], max_vow = 0, max_con = 0;
        for (char c : s) {
            int i = c - 'a';
            freq[i]++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                max_vow = max(max_vow, freq[i]);
            } else {
                max_con = max(max_con, freq[i]);
            }
        }
        return max_vow + max_con;
    }
};