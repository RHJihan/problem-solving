class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for (int i = 0; i < chalk.size(); i++) {
            sum += chalk[i];
        }

        int rest = k % sum;
        for (int i = 0; i < chalk.size(); i++) {
            rest -= chalk[i];
            if (rest < 0) {
                return i;
            }
        }
        return -1;
    }
};