class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        string result = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i)
                result += " ";
        }

        return result;
    }
};