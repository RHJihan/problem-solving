#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k) {
  map<int, int> seen;

  for (int i = 0; i < (int)nums.size(); i++) {
    if (seen.find(nums[i]) != seen.end()) {
      if (abs(i - seen[nums[i]]) <= k) {
        return true;
      }
    }
    seen[nums[i]] = i;
  }

  return false;
}

int main() {
  vector<int> nums = {1, 2, 3, 1};
  cout << containsNearbyDuplicate(nums, 3) << endl;

  return 0;
}