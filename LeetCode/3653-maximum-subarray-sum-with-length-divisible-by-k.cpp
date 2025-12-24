class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long result = INT_MIN;
        long long prefix = 0;

        int n = nums.size();

        vector<long long> min_prefix(k, LLONG_MAX);
        min_prefix[k - 1] = 0;

        for (int i = 0; i < n; i++) {

            prefix += nums[i];
            int rem = i % k;
            if (i >= k - 1) {
                result = max(result, prefix - min_prefix[rem]);
            }
            if (i == k - 1) {
                result = prefix;
            }

            min_prefix[rem] = min(min_prefix[rem], prefix);
        }

        return result;
    }
};