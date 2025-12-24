class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int max_product = nums[0];
        int current_max = nums[0];
        int current_min = nums[0];

        for (int i = 1; i < (int)nums.size(); i++) {
            int num = nums[i];

            if (num < 0) {
                swap(current_max, current_min);
            }

            current_max = max(num, current_max * num);
            current_min = min(num, current_min * num);
            max_product = max(max_product, current_max);
        }

        return max_product;
    }
};