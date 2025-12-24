class Solution {
public:
    int robLinear(vector<int>& nums, int left, int right) {
        int n = right - left + 1;
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[left];

        vector<int> dp(n);
        dp[0] = nums[left];
        dp[1] = max(nums[left], nums[left + 1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[left + i] + dp[i - 2]);
        }

        return dp[n - 1];
    }

    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }

        int case1 = robLinear(nums, 0, n - 2);

        int case2 = robLinear(nums, 1, n - 1);

        return max(case1, case2);
    }
};
