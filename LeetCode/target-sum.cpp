#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> &nums, int pos, int sum, int target) {
  if (pos == (int)nums.size()) {
    return target == sum ? 1 : 0;
  }

  return count(nums, pos + 1, sum + -nums[pos], target) +
         count(nums, pos + 1, sum + +nums[pos], target);
}

int findTargetSumWays(vector<int> &nums, int target) {
  return count(nums, 0, 0, target);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  vector<int> nums = {1, 1, 1, 1, 1};
  int target = 3;

  cout << findTargetSumWays(nums, target) << endl;

  return 0;
}