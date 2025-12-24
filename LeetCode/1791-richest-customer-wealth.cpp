class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;

        for (int i = 0; i < (int)accounts.size(); i++) {
            int current_wealth = 0;

            for (int j = 0; j < (int)accounts[i].size(); j++) {
                current_wealth += accounts[i][j];
            }

            if (current_wealth > max_wealth) {
                max_wealth = current_wealth;
            }
        }

        return max_wealth;
    }
};