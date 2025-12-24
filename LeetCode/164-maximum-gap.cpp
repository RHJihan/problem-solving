class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 1; i < nums.size(); i++) {
            int current = nums[i] - nums[i - 1];
            res = max(res, current);
        }
        return res;
    }
};