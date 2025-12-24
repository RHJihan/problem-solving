class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current = 0;
        for (int i = 0; i < k; i++) {
            current += nums[i];
        }

        double max_sum = current;

        for (int i = k; i < (int)nums.size(); i++) {
            current = current - nums[i - k] + nums[i];
            if (current > max_sum) {
                max_sum = current;
            }
        }

        return max_sum / k;
    }
};