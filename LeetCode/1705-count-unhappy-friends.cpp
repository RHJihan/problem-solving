class Solution {
public:
    bool isUnhappy(int n, vector<vector<int>>& pref, vector<int> pairing, int f,
                   int person) {
        bool isTrue = false;
        for (int i = 0; i < n - 1; i++) {
            if (pref[person][i] == pairing[person])
                break;
            if (pref[person][i] == f)
                isTrue = true;
        }
        return isTrue;
    }

    int unhappyFriends(int n, vector<vector<int>>& pref,
                       vector<vector<int>>& pairs) {
        vector<int> pairing(n);
        for (vector<int> pair : pairs) {
            pairing[pair[0]] = pair[1];
            pairing[pair[1]] = pair[0];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (pref[i][j] == pairing[i])
                    break;
                if (isUnhappy(n, pref, pairing, i, pref[i][j])) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};