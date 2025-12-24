class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = (int)numbers.size();
        int left = 0, right = n - 1;
        int sum = 0;

        while (left < right) {
            sum = numbers[left] + numbers[right];

            if (sum > target) {
                right--;
            } else if (sum < target) {
                left++;
            } else {
                return {left + 1, right + 1};
            }
        }
        return {-1, -1};
    }
};