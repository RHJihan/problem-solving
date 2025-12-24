class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int curr = capacity, res = 0;
        for (int i = 0, n = plants.size(); i < n; ++i) {
            if (curr < plants[i]) {
                curr = capacity - plants[i];
                res += 2 * i + 1;
            } else {
                curr -= plants[i];
                ++res;
            }
        }
        return res;
    }
};