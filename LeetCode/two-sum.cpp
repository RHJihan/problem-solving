// https://leetcode.com/problems/two-sum/description/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  map<int, int> mp;
  vector<int> result;

  for (int i = 0; i < (int)nums.size(); i++) {
    int complement = target - nums[i];
    if (mp.find(complement) != mp.end()) {
      result.push_back(mp[complement]);
      result.push_back(i);
      break;
    }
    mp[nums[i]] = i;
  }
  return result;
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = twoSum(nums, target);

  cout << "[" << result[0] << ", " << result[1] << "]" << endl;

  return 0;
}
