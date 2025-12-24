class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> letters;

        for (int i = 0; i < (int)sentence.size(); i++) {
            letters.insert(sentence[i]);
        }

        if (letters.size() == 26) {
            return true;
        }

        return false;
    }
};