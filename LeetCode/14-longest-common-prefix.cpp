class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = "";

        int min_len = (int)strs[0].size();
        for (int i = 1; i < (int)strs.size(); i++) {
            if ((int)strs[i].size() < min_len) {
                min_len = (int)strs[i].size();
            }
        }

        for (int i = 0; i < min_len; i++) {
            char current = strs[0][i];

            for (int j = 1; j < (int)strs.size(); j++) {
                if (strs[j][i] != current) {
                    return prefix;
                }
            }

            prefix += current;
        }

        return prefix;
    }
};