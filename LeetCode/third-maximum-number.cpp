#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int thirdMax(vector<int> &nums) {
  sort(nums.begin(), nums.end(), greater<int>());

  vector<int> distinct;
  distinct.push_back(nums[0]);

  for (int i = 1; i < (int)nums.size(); i++) {
    if (nums[i] != nums[i - 1]) {
      distinct.push_back(nums[i]);
    }
  }

  if (distinct.size() >= 3) {
    return distinct[2];
  }
  return distinct[0];
}

int main() {

  vector<int> nums = {3, 2, 1};
  cout << thirdMax(nums) << endl;

  return 0;
}