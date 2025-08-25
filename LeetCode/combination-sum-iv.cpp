#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int combinationSum4(vector<int> &nums, int target) {
    vector<unsigned int> dp(target + 1, 0);
    dp[0] = 1;
    for (int i = 0; i <= target; i++) {
      for (int j = 0; j < (int)nums.size(); j++) {
        int num = nums[j];
        if (i - num < 0 || !dp[i - num]) {
          continue;
        }
        dp[i] += dp[i - num];
      }
    }
    return dp[target];
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 2, 3};
  cout << sol.combinationSum4(nums, 4) << endl;
  return 0;
}