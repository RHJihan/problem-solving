class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        for (int x : nums) {
            if (x == 1) {
                count++;
            }
        }

        if (count > 0) {
            return n - count;
        }

        int flag = 0;
        int len = INT_MAX;

        for (int i = 0; i < n; i++) {
            int g = nums[i];
            for (int j = i; j < n; j++) {
                int tmp = __gcd(g, nums[j]);
                if (tmp == 1) {
                    flag = 1;
                    len = min(len, (j - i + 1));
                }
                g = tmp;
            }
        }
        if (flag == 0) {
            return -1;
        }

        return len - 1 + n - 1;
    }
};