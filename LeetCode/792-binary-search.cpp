class Solution {
public:
    int binary_search(const vector<int>& nums, int target, int left,
                      int right) {
        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return binary_search(nums, target, left, mid - 1);
        else
            return binary_search(nums, target, mid + 1, right);
    }

    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, (int)nums.size() - 1);
    }
};