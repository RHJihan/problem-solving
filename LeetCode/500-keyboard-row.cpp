class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<int> st;
        vector<string> result;
        vector<int> first = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        vector<int> second = {'a', 's', 'd', 'f', 'g', 'g', 'h', 'j', 'k', 'l'};
        vector<int> third = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        for (auto word : words) {
            st.clear();
            for (auto c : word) {
                c = tolower(c);
                if (find(first.begin(), first.end(), c) != first.end()) {
                    st.insert(1);
                } else if (find(second.begin(), second.end(), c) !=
                           second.end()) {
                    st.insert(2);
                } else if (find(third.begin(), third.end(), c) != third.end()) {
                    st.insert(3);
                }
            }
            if (st.size() == 1) {
                result.push_back(word);
            }
        }
        return result;
    }
};