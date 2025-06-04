#include <iostream>
#include <vector>
using namespace std;

int lengthOfLIS(vector<int> &nums) {
  int n = (int)nums.size();
  vector<int> dp(n, 1);

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (nums[j] < nums[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }

  int longest = 1;
  for (int i = 0; i < n; i++) {
    if (dp[i] > longest) {
      longest = dp[i];
    }
  }

  return longest;
}

int main() {
  vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
  cout << lengthOfLIS(nums) << endl;

  return 0;
}