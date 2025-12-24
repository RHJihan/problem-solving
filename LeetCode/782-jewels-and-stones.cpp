class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;

        for (int i = 0; i < (int)jewels.size(); i++) {
            st.insert(jewels[i]);
        }

        int count = 0;
        for (int i = 0; i < (int)stones.size(); i++) {
            if (st.find(stones[i]) != st.end()) {
                count++;
            }
        }

        return count;
    }
};