class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        set<string> banned_set(banned.begin(), banned.end());
        map<string, int> word_count;

        for (int i = 0; i < (int)paragraph.size(); i++) {
            if (isalpha(paragraph[i])) {
                paragraph[i] = tolower(paragraph[i]);
            } else {
                paragraph[i] = ' ';
            }
        }

        stringstream ss(paragraph);
        string word;
        while (ss >> word) {
            if (banned_set.find(word) == banned_set.end()) {
                word_count[word]++;
            }
        }

        string result;
        int max_freq = 0;

        for (auto it = word_count.begin(); it != word_count.end(); it++) {
            string current = it->first;
            int frequency = it->second;

            if (frequency > max_freq) {
                max_freq = frequency;
                result = current;
            }
        }

        return result;
    }
};