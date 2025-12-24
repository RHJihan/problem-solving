class Solution {
public:
    int lengthOfLastWord(string s) {

        bool foundFirstAlpha = false;
        int count = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (!foundFirstAlpha && isalpha(s[i]))
                foundFirstAlpha = true;

            if (foundFirstAlpha && !isalpha(s[i]))
                break;

            if (foundFirstAlpha)
                count++;
        }
        return count;
    }
};