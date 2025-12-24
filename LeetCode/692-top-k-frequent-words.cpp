class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> freq;

        for (string word : words) {
            freq[word]++;
        }

        vector<pair<string, int>> vec(freq.begin(), freq.end());

        sort(vec.begin(), vec.end(),
             [](pair<string, int>& a, pair<string, int>& b) {
                 if (a.second == b.second) {
                     return a.first < b.first;
                 }
                 return a.second > b.second;
             });

        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(vec[i].first);
        }

        return result;
    }
};