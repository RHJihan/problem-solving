#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int> &nums) {
  int farthest = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    if (i > farthest) {
      return false;
    }
    farthest = max(farthest, i + nums[i]);
  }

  return true;
}

int main() {
  vector<int> nums = {2, 3, 1, 1, 4};
  cout << (canJump(nums) ? "true" : "false") << endl;

  return 0;
}
