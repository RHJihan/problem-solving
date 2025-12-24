class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = (int)bank.size();

        vector<int> count(n, 0);
        for (int i = 0; i < n; i++) {

            string s = bank[i];
            int tmp = 0;
            for (char ch : s) {
                if (ch == '1')
                    tmp++;
            }
            count[i] = tmp;
        }

        int result = 0;
        for (int i = 0; i < n; i++) {
            if (count[i] == 0) {
                continue;
            }

            for (int j = i + 1; j < n; j++) {
                if (count[j] != 0) {
                    result += count[j] * count[i];
                    break;
                }
            }
        }

        return result;
    }
};