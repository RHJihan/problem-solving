class Solution {
public:
    int digit_sum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int total_sum = 0;

        for (int num : nums) {
            element_sum += num;
            total_sum += digit_sum(num);
        }

        return abs(element_sum - total_sum);
    }
};