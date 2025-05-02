// https://leetcode.com/problems/missing-number/description/
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums) {
  int n = (int)nums.size();
  int sum = n * (n + 1) / 2;
  int given = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    given += nums[i];
  }

  return sum - given;
}

int main() {
  vector<int> nums = {3, 0, 1};
  cout << missingNumber(nums) << endl;

  return 0;
}
