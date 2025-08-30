#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int minSubArrayLen(int target, vector<int> &nums) {
    int start = 0;
    int end = 0;
    int currentSum = 0;
    int minLength = INT_MAX;

    while (end < nums.size()) {
      currentSum += nums[end];

      while (currentSum >= target) {
        int currentLength = end - start + 1;
        if (currentLength < minLength) {
          minLength = currentLength;
        }
        currentSum -= nums[start];
        start++;
      }

      end++;
    }

    if (minLength == INT_MAX) {
      return 0;
    }

    return minLength;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {2, 3, 1, 2, 4, 3};
  cout << sol.minSubArrayLen(7, nums) << endl;

  return 0;
}