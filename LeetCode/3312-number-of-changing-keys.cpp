class Solution {
public:
    int countKeyChanges(string s) {
        int changes = 0;
        char last = tolower(s[0]);

        for (int i = 1; i < s.length(); i++) {
            char current = tolower(s[i]);

            if (current != last) {
                changes++;
                last = current;
            }
        }

        return changes;
    }
};