class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> result(k, 0);

        map<int, set<int>> mp;
        for (vector<int> log : logs) {
            mp[log[0]].insert(log[1]);
        }

        for (auto user : mp) {
            result[user.second.size() - 1]++;
        }

        return result;
    }
};