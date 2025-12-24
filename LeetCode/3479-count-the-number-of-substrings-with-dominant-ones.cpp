class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> zeros;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                zeros.push_back(i);
        }
        zeros.push_back(n);

        int ans = 0;

        int firstZeroIdx = 0;

        for (int i = 0; i < n; i++) {

            int covered = 0;

            if (zeros[firstZeroIdx] < i)
                firstZeroIdx++;

            for (int z = 0;; z++) {

                int requiredLength = max(0, z * z + z - 1);
                if (i + requiredLength >= n) {
                    break;
                }

                if (firstZeroIdx + z >= zeros.size()) {
                    break;
                }

                int zeroPosition = zeros[firstZeroIdx + z];
                int minStart = i + requiredLength;
                minStart = max(minStart, covered);

                int validCount = zeroPosition - minStart;
                if (validCount > 0) {
                    ans += validCount;
                }

                if (zeroPosition > minStart) {
                    covered = zeroPosition;
                }
            }
        }
        return ans;
    }
};
