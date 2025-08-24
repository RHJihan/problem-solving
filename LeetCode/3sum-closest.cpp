#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int n = (int) nums.size();

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
      int left = i + 1, right = n - 1;

      while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];

        if (abs(sum - target) < abs(closest - target)) {
          closest = sum;
        }

        if (sum < target) {
          left++;
        } else if (sum > target) {
          right--;
        } else {
          return sum;
        }
      }
    }

    return closest;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {-1, 2, 1, -4};
  int target = 1;

  cout << sol.threeSumClosest(nums, target) << endl;

  return 0;
}
