class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minLen = INT_MAX;
        int currSum = 0;

        while (right < nums.size()) {
            currSum += nums[right];

            while (currSum >= target) {
                int currLen = right - left + 1;
                minLen = min(currLen, minLen);
                currSum -= nums[left];
                left++;
            }
            right++;
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
