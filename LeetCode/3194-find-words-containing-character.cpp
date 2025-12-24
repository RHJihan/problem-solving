class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;

        for (int i = 0; i < (int)words.size(); i++) {
            string word = words[i];

            for (int j = 0; j < (int)word.size(); j++) {
                if (word[j] == x) {
                    result.push_back(i);
                    break;
                }
            }
        }

        return result;
    }
};