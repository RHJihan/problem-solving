class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int max_len = 0;

        for (auto it : freq) {
            int num = it.first;
            if (freq.count(num + 1)) {
                int len = freq[num] + freq[num + 1];
                max_len = max(max_len, len);
            }
        }

        return max_len;
    }
};