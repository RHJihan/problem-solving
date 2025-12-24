class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> freq;
        for (char task : tasks) {
            freq[task]++;
        }

        int maxFreq = 0;
        for (auto& p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        int countMax = 0;
        for (auto& p : freq) {
            if (p.second == maxFreq)
                countMax++;
        }

        int part1 = (maxFreq - 1) * (n + 1) + countMax;
        int result = max((int)tasks.size(), part1);

        return result;
    }
};