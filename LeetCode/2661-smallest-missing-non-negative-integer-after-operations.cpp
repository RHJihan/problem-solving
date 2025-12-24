class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = (int)nums.size();

        vector<int> count(value, 0);

        for (int num : nums) {
            int remainder = ((num % value) + value) % value;
            count[remainder]++;
        }

        int res = 0;

        while (true) {
            int need = res % value;
            if (count[need] > 0) {
                count[need]--;
                res++;
            } else {
                break;
            }
        }

        return res;
    }
};