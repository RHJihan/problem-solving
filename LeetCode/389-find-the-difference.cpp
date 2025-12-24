class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = {0};

        for (int i = 0; i < (int)s.size(); i++) {
            count[s[i] - 'a']++;
        }

        for (int i = 0; i < (int)t.size(); i++) {
            char c = t[i];
            count[c - 'a']--;

            if (count[c - 'a'] < 0) {
                return c;
            }
        }
        return ' ';
    }
};