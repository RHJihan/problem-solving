#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {

  if ((int)nums.size() == 0) {
    return 0;
  }

  int slow = 0;
  int fast = 1;
  int count = 1;

  while (fast < (int)nums.size()) {

    if (nums[slow] != nums[fast]) {
      slow = fast;
      count++;
    } else {
      nums[fast] = 1000;
    }
    fast++;
  }
  sort(nums.begin(), nums.end());
  return count;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  vector<int> nums = {1, 1, 1, 2, 2, 5, 5, 6, 6, 7};
  cout << removeDuplicates(nums) << endl;

  for (int num : nums) {
    cout << num << " ";
  }

  return 0;
}
