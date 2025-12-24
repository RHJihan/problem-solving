class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);

        for (int i = 0; i < (int)magazine.size(); i++) {
            count[magazine[i] - 'a']++;
        }

        for (int i = 0; i < (int)ransomNote.size(); i++) {
            if (count[ransomNote[i] - 'a'] == 0) {
                return false;
            }
            count[ransomNote[i] - 'a']--;
        }

        return true;
    }
};