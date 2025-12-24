class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map_s_to_t;
        map<char, char> map_t_to_s;

        for (int i = 0; i < (int)s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (map_s_to_t.count(c1)) {
                if (map_s_to_t[c1] != c2) {
                    return false;
                }
            } else {
                map_s_to_t[c1] = c2;
            }

            if (map_t_to_s.count(c2)) {
                if (map_t_to_s[c2] != c1) {
                    return false;
                }
            } else {
                map_t_to_s[c2] = c1;
            }
        }

        return true;
    }
};