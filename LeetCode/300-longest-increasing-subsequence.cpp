class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> dp(n, 1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        int longest = 1;
        for (int i = 0; i < n; i++) {
            if (dp[i] > longest) {
                longest = dp[i];
            }
        }

        return longest;
    }
};