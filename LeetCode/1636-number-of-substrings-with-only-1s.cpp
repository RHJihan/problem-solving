class Solution {
public:
    int numSub(string s) {
        int count = 0, total = 0, MOD = 1e9 + 7;
        for (char c : s) {
            if (c == '1') {
                count++;
            } else {
                count = 0;
            }
            total = (total + count) % MOD;
        }
        return total;
    }
};