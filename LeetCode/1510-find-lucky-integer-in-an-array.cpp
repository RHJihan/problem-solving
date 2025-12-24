class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501] = {0};

        int max_val = 0;
        for (int i : arr) {
            freq[i]++;
            max_val = max(max_val, i);
        }

        for (int i = max_val; i >= 1; i--) {
            if (freq[i] == i) {
                return i;
            }
        }
        return -1;
    }
};