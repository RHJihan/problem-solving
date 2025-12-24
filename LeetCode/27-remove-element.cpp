class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (int j = 0; j < (int)nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};