class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

        while (x > 0 || y > 0) {
            int bitX = x % 2;
            int bitY = y % 2;

            if (bitX != bitY) {
                count++;
            }

            x = x / 2;
            y = y / 2;
        }

        return count;
    }
};