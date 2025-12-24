class Solution {
public:
    int countDigits(int num) {
        int org = num;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && org % digit == 0) {
                count++;
            }
            num = num / 10;
        }

        return count;
    }
};