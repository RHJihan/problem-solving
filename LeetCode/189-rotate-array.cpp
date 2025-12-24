class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0)
            return;

        vector<int> rotated;

        for (int i = n - k; i < n; i++) {
            rotated.push_back(nums[i]);
        }

        for (int i = 0; i < n - k; i++) {
            rotated.push_back(nums[i]);
        }

        for (int i = 0; i < n; i++)
            nums[i] = rotated[i];
    }
};