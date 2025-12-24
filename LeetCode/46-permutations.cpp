class Solution {
public:
    void generate(int index, vector<int>& nums, vector<vector<int>>& result) {
        if (index == (int)nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = index; i < (int)nums.size(); i++) {
            swap(nums[index], nums[i]);
            generate(index + 1, nums, result);
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        generate(0, nums, result);
        return result;
    }
};