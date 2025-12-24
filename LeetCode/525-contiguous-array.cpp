class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> mp;
        mp[0] = -1;

        int max_len = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0) {
                sum += -1;
            } else {
                sum += 1;
            }

            if (mp.find(sum) != mp.end()) {
                int length = i - mp[sum];
                max_len = max(max_len, length);
            } else {
                mp[sum] = i;
            }
        }

        return max_len;
    }
};