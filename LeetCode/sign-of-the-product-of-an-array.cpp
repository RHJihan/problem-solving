#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int> &nums) {
  int neg_count = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    int num = nums[i];

    if (num == 0) {
      return 0;
    }

    if (num < 0) {
      neg_count++;
    }
  }

  if (neg_count % 2 == 0) {
    return 1;
  }
  return -1;
}

int main() {
  vector<int> nums = {-1, -2, -3, -4, 3, 2, 1};

  cout << arraySign(nums) << endl;

  return 0;
}