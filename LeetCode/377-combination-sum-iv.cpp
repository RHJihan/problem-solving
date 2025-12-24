class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;
        for (int i = 0; i <= target; i++) {
            for (int j = 0; j < (int)nums.size(); j++) {
                int num = nums[j];
                if (i - num < 0 || !dp[i - num]) {
                    continue;
                }
                dp[i] += dp[i - num];
            }
        }
        return dp[target];
    }
};