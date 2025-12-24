class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMin = nums[0];
        int currMax = nums[0];
        int minSum = nums[0];
        int maxSum = nums[0];
        int totalSum = nums[0];

        for (int i = 1; i < (int)nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(currMin, minSum);

            totalSum += nums[i];
        }

        if (minSum == totalSum) {
            return maxSum;
        }
        return max(maxSum, totalSum - minSum);
    }
};