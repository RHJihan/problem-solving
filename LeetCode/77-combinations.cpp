class Solution {
public:
    void sol(int n, int k, int i, vector<vector<int>>& ans, vector<int>& v,
             int start) {
        if (i == k) {
            ans.push_back(v);
            return;
        }
        for (int j = start; j <= n; j++) {
            v.push_back(j);
            sol(n, k, i + 1, ans, v, j + 1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        int i = 0;
        int start = 1;
        sol(n, k, i, ans, v, start);
        return ans;
    }
};