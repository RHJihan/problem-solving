class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int current = prices[0];
        for (int i = 1; i < (int)prices.size(); i++) {
            if (prices[i] > current)
                profit += prices[i] - current;

            current = prices[i];
        }
        return profit;
    }
};