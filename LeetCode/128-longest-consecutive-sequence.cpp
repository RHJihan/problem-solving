class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> num_set(nums.begin(), nums.end());
        int longest = 0;

        for (auto it = num_set.begin(); it != num_set.end(); it++) {
            if (num_set.find(*it - 1) == num_set.end()) {
                int curr_num = *it;
                int curr_streak = 1;
                while (num_set.find(curr_num + 1) != num_set.end()) {
                    curr_num++;
                    curr_streak++;
                }

                longest = max(longest, curr_streak);
            }
        }

        return longest;
    }
};