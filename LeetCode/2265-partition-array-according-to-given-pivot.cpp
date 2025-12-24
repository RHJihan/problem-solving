class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, greater, equal;
        for (int n : nums) {
            if (n < pivot) {
                less.push_back(n);
            } else if (n > pivot) {
                greater.push_back(n);
            } else {
                equal.push_back(n);
            }
        }

        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), greater.begin(), greater.end());

        return less;
    }
};