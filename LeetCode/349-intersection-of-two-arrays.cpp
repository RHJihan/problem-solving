class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(), nums1.end());
        set<int> result;

        for (int i = 0; i < (int)nums2.size(); i++) {
            if (st.find(nums2[i]) != st.end()) {
                result.insert(nums2[i]);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};