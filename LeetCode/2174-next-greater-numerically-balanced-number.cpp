
class Solution {
public:
    bool check(int x) {
        string s = to_string(x);

        vector<int> count(10, 0);

        for (char ch : s) {
            int digit = ch - '0';
            count[digit]++;
        }

        for (char ch : s) {
            int digit = ch - '0';
            if (digit == 0 || count[digit] != digit) {
                return false;
            }
        }

        return true;
    }

    int nextBeautifulNumber(int n) {
        for (int i = n + 1;; i++) {
            if (check(i)) {
                return i;
            }
        }
    }
};