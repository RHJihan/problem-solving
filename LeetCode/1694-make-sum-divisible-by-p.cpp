class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sufsum = 0;
        for (auto x : nums) {
            sufsum += x;
        }

        long long presum = 0;
        int n = nums.size();
        int ans = n;
        map<int, int> dp;

        dp[0] = -1;

        for (int i = 0; i < n; i++) {
            presum += nums[i];
            sufsum -= nums[i];

            dp[presum % p] = i;

            int rem = (p - sufsum % p) % p;

            if (dp.find(rem) != dp.end()) {
                ans = min(ans, i - dp[rem]);
            }
        }

        if (ans == n)
            return -1;

        return ans;
    }
};