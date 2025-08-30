#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int jump(vector<int> &nums) {
    int count = 0;
    int farthest = 0;
    int current_end = 0;
    int k = nums.size();

    for (int i = 0; i < k - 1; i++) {
      farthest = max(farthest, i + nums[i]);

      if (i == current_end) {
        count++;
        current_end = farthest;
      }
    }
    return count;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {2, 3, 1, 1, 4};
  cout << sol.jump(nums) << endl;

  return 0;
}