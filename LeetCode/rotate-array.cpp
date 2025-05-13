#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k) {
  k = k % (int)nums.size();

  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
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
