class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        stringstream ss(s);
        string w;
        int max_len = 0;

        while (getline(ss, w, ' ')) {
            max_len = max(max_len, (int)w.size());
            words.push_back(w);
        }

        vector<string> result;

        for (int i = 0; i < max_len; i++) {
            string str = "";
            for (int j = 0; j < words.size(); j++) {
                if (i < words[j].size())
                    str += words[j][i];
                else
                    str += ' ';
            }
            while (!str.empty() && str.back() == ' ') {
                str.pop_back();
            }
            result.push_back(str);
        }
        return result;
    }
};