class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<map<char, int>> freq((int)words.size());

        for (int i = 0; i < (int)words.size(); i++) {
            string current = words[i];
            for (int j = 0; j < (int)current.size(); j++) {
                char ch = current[j];
                freq[i][ch]++;
            }
        }

        vector<string> result;
        result.push_back(words[0]);
        for (int i = 1; i < (int)words.size(); i++) {
            if (freq[i] != freq[i - 1]) {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};