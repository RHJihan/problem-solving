class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};

        for (int i = 0; i < (int)nums.size(); i++) {
            int n = (int)result.size();
            for (int j = 0; j < n; j++) {
                vector<int> new_subset = result[j];
                new_subset.push_back(nums[i]);
                result.push_back(new_subset);
            }
        }

        return result;
    }
};