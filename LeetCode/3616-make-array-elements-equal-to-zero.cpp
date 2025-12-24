class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int count = 0, n = (int)nums.size();
        int sum = 0, half_sum = 0;

        for (int num : nums) {
            sum += num;
        }

        for (int i = 0; i < n; i++) {
            half_sum += nums[i];
            if (nums[i] == 0) {
                if (2 * half_sum == sum) {
                    count += 2;
                } else if (abs(sum - 2 * half_sum) == 1) {
                    count++;
                }
            }
        }

        return count;
    }
};