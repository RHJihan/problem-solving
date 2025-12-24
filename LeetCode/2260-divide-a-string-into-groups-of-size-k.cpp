class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        for (int i = 0; i < (int)s.size(); i += k) {
            string current = s.substr(i, k);

            if ((int)current.size() != k) {
                current.append(k - (int)current.size(), fill);
            }
            result.push_back(current);
        }

        return result;
    }
};