class Solution {
public:
    int binary_search(vector<int>& a, int target) {
        int l = 0;
        int r = (int)a.size() - 1;
        int answer = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (a[mid] >= target) {
                answer = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return answer;
    }

    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(), hours.end());

        int index = binary_search(hours, target);

        if (index == -1) {
            return 0;
        }

        return hours.size() - index;
    }
};