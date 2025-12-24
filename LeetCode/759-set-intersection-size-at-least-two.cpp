class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[1] != b[1])
                     return a[1] < b[1];
                 return a[0] > b[0];
             });

        int count = 2;
        int secondLast = intervals[0][1] - 1;
        int last = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            if (start <= secondLast) {
                continue;
            } else if (start <= last) {
                count += 1;
                secondLast = last;
                last = end;
            } else {
                count += 2;
                secondLast = end - 1;
                last = end;
            }
        }

        return count;
    }
};