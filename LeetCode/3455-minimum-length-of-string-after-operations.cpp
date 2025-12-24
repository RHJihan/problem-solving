class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int totalDeleted = 0;

        for (auto item : freq) {
            int count = item.second;

            if (count == 1)
                continue;

            if (count == 2)
                continue;

            if (count % 2 == 0) {
                totalDeleted += (count - 2);
            } else {
                totalDeleted += (count - 1);
            }
        }

        return n - totalDeleted;
    }
};
