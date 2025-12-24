class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n == 0) {
            return 0;
        }

        int result = 0;
        int sign = 1;
        int high = 0;

        while (n > 0) {
            high = (int)log2(n);
            result += sign * ((1 << (high + 1)) - 1);
            n ^= (1 << high);
            sign *= -1;
        }

        return result;
    }
};