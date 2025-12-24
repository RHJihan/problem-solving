class Solution {
public:
    int binary_search(vector<int>& nums, int target, int l, int r) {
        int mid = l + (r - l) / 2;

        if (l > r) {
            return -1;
        }

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            return binary_search(nums, target, l, mid - 1);
        } else {
            return binary_search(nums, target, mid + 1, r);
        }

        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = (int)nums.size();
        int index = binary_search(nums, target, 0, n - 1);

        if (index == -1) {
            return {-1, -1};
        }

        int left = index, right = index;

        for (int i = index; i < n; i++) {
            if (nums[i] == target) {
                right = i;
            }
        }

        for (int i = index; i >= 0; i--) {
            if (nums[i] == target) {
                left = i;
            }
        }

        return {left, right};
    }
};