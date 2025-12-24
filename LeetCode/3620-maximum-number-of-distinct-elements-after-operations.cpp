class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int current = INT_MIN;

        for (int n : nums) {
            int left = n - k;
            int right = n + k;

            if (current < left) {
                current = left;
            }
            if (current <= right) {
                ans++;
                current++;
            }
        }
        return ans;
    }
};
