class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = k - 1;
        
        if (n == 0) {
            return true;
        }

        for (int j = k + 1; j < (int)nums.size(); j++) {
            if (nums[j] > nums[j - 1] && nums[j - k] > nums[j - k - 1]) {
                n--;
            } else {
                n = k - 1;
            }
            if (n == 0) {
                return true;
            }
        }
        return false;
    }
};