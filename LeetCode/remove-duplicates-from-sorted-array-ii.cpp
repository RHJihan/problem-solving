#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int i = 0;
    for (int j = 0; j < (int)nums.size(); j++) {
      if (i == 0 || i == 1 || nums[i - 2] != nums[j]) {
        nums[i] = nums[j];
        i++;
      }
    }
    return i;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {1, 1, 1, 2, 2, 3};
  cout << sol.removeDuplicates(nums) << endl;

  return 0;
}