class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        vector<vector<int>> ans;
        vector<int> tmp;
        for (auto s : score) {
            tmp.push_back(s[k]);
        }
        sort(tmp.begin(), tmp.end(), greater<int>());

        for (int t : tmp) {
            for (auto s : score) {
                if (find(s.begin(), s.end(), t) != s.end()) {
                    ans.push_back(s);
                    break;
                }
            }
        }

        return ans;
    }
};