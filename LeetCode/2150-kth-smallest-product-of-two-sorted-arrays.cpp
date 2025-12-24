class Solution {
public:
    long long countLessEqual(const vector<int>& A, const vector<int>& B,
                             long long x) {
        long long count = 0;
        int n = A.size(), m = B.size();
        for (int i = 0; i < n; ++i) {
            int a = A[i];
            if (a > 0) {
                int l = 0, r = m;
                while (l < r) {
                    int mid = (l + r) / 2;
                    if ((long long)a * B[mid] <= x)
                        l = mid + 1;
                    else
                        r = mid;
                }
                count += l;
            } else if (a < 0) {
                int l = 0, r = m;
                while (l < r) {
                    int mid = (l + r) / 2;
                    if ((long long)a * B[mid] <= x)
                        r = mid;
                    else
                        l = mid + 1;
                }
                count += m - l;
            } else {
                // a == 0
                if (x >= 0)
                    count += m;
            }
        }
        return count;
    }

    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2,
                                 long long k) {
        long long left = -1e10, right = 1e10;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (countLessEqual(nums1, nums2, mid) < k) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};