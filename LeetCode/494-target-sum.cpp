class Solution {
public:
    map<string, int> memo;

    int count(vector<int>& nums, int pos, int sum, int target) {
        if (pos == (int)nums.size())
            return sum == target ? 1 : 0;

        string key = to_string(pos) + ',' + to_string(sum);
        if (memo.count(key))
            return memo[key];

        int add = count(nums, pos + 1, sum + nums[pos], target);
        int sub = count(nums, pos + 1, sum - nums[pos], target);

        return memo[key] = add + sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return count(nums, 0, 0, target);
    }
};