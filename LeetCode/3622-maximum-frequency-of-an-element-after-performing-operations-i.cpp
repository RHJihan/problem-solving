class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int current_freq = 0;
        int max_freq = 0;

        auto left = freq.begin();
        auto right = freq.begin();

        int min_val = freq.begin()->first;
        int max_val = prev(freq.end())->first;

        for (int target = min_val; target <= max_val; target++) {
            while (right != freq.end() && right->first <= target + k) {
                current_freq += right->second;
                right++;
            }

            while (left != freq.end() && left->first < target - k) {
                current_freq -= left->second;
                left++;
            }

            int count = 0;
            if (freq.count(target)) {
                count = freq[target];
            }

            max_freq = max(max_freq, min(count + numOperations, current_freq));
        }

        return max_freq;
    }
};