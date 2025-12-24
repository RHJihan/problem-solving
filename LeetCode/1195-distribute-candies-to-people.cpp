class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int i = 0;
        while (candies) {
            int give = min(candies, i + 1);
            ans[i % num_people] += give;
            candies -= give;
            i++;
        }
        return ans;
    }
};