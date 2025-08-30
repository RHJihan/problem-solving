#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums) {
    vector<string> result;
    if (nums.empty()) {
      return result;
    }

    int numSize = (int)nums.size();

    int start = nums[0];
    for (int i = 1; i <= numSize; ++i) {
      if (i == numSize || nums[i] != nums[i - 1] + 1) {
        if (start == nums[i - 1]) {
          result.push_back(to_string(start));
        } else {
          result.push_back(to_string(start) + "->" +
                           to_string(nums[i - 1]));
        }
        if (i < numSize) {
          start = nums[i];
        }
      }
    }
    return result;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {2, 7, 11, 15};
  vector<string> result = sol.summaryRanges(nums);

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}