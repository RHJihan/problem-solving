class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = (int)colors.size(), sum = 0;

        for (int i = 1; i < n; i++) {
            int maximum = 0;
            while (i < n and colors[i] == colors[i - 1]) {
                sum += neededTime[i - 1];
                maximum = max(maximum, neededTime[i - 1]);
                i++;
            }
            sum += neededTime[i - 1];
            maximum = max(maximum, neededTime[i - 1]);
            if (maximum != 0) {
                sum -= maximum;
            }
        }
        return sum;
    }
};