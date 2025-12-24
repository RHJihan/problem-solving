class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> seen;

        for (int i = 0; i < (int)nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                if (abs(i - seen[nums[i]]) <= k) {
                    return true;
                }
            }
            seen[nums[i]] = i;
        }

        return false;
    }
};