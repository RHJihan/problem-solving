class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_freq(26, 100);

        for (int i = 0; i < (int)words.size(); i++) {
            string word = words[i];
            vector<int> freq(26, 0);
            for (int j = 0; j < (int)word.size(); j++) {
                char c = word[j];
                freq[c - 'a']++;
            }

            for (int j = 0; j < 26; j++) {
                if (freq[j] < min_freq[j]) {
                    min_freq[j] = freq[j];
                }
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (min_freq[i] > 0) {
                char common = i + 'a';
                result.push_back(string(1, common));
                min_freq[i]--;
            }
        }

        return result;
    }
};