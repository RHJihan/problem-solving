#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    map<int, int> prefixCount;
    prefixCount[0] = 1;

    int currSum = 0;
    int count = 0;

    for (int num : nums) {
      currSum += num;

      if (prefixCount.find(currSum - k) != prefixCount.end()) {
        count += prefixCount[currSum - k];
      }

      prefixCount[currSum]++;
    }

    return count;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 2, 3};
  int k = 3;

  cout << sol.subarraySum(nums, k) << endl;

  return 0;
}
