class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;

        for (int i = 0; i < (int)sentences.size(); i++) {
            string sentence = sentences[i];
            int count = 1;

            for (int j = 0; j < (int)sentence.size(); j++) {
                if (sentence[j] == ' ') {
                    count++;
                }
            }

            if (count > max_words) {
                max_words = count;
            }
        }

        return max_words;
    }
};