class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = (int)nums.size();

        int pivotIndex = n - 2;
        while (pivotIndex >= 0 && nums[pivotIndex] >= nums[pivotIndex + 1]) {
            pivotIndex--;
        }

        if (pivotIndex >= 0) {
            int swapIndex = n - 1;
            while (nums[swapIndex] <= nums[pivotIndex]) {
                swapIndex--;
            }
            swap(nums[pivotIndex], nums[swapIndex]);
        }

        reverse(nums.begin() + pivotIndex + 1, nums.end());
    }
};