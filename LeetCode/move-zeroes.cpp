#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {
  int pos = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    if (nums[i] != 0) {
      nums[pos] = nums[i];
      pos++;
    }
  }

  while (pos < (int)nums.size()) {
    nums[pos] = 0;
    pos++;
  }
}

int main() {
  vector<int> nums = {0, 1, 0, 3, 12};

  moveZeroes(nums);

  for (int i = 0; i < (int)nums.size(); i++) {
    cout << nums[i] << " ";
  }

  return 0;
}
