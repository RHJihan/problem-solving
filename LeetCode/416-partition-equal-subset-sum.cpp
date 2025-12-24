class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total_sum = 0;

        for (int i = 0; i < (int)nums.size(); i++) {
            total_sum += nums[i];
        }

        if (total_sum % 2 != 0) {
            return false;
        }

        int target = total_sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (int i = 0; i < (int)nums.size(); i++) {
            for (int j = target; j >= nums[i]; --j) {
                dp[j] = dp[j] || dp[j - nums[i]];
            }
        }

        return dp[target];
    }
};