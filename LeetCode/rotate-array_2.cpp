#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k) {
  int n = (int)nums.size();
  k = k % n;

  vector<int> rotated(n);

  for (int i = 0; i < n; i++) {
    int new_index = (i + k) % n;
    rotated[new_index] = nums[i];
  }

  for (int i = 0; i < n; i++) {
    nums[i] = rotated[i];
  }
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k1 = 3;
  rotate(nums, k1);
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
