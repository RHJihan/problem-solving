#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int n = (int) nums.size();

    int pivotIndex = n - 2;
    while (pivotIndex >= 0 && nums[pivotIndex] >= nums[pivotIndex + 1]) {
      pivotIndex--;
    }

    if (pivotIndex >= 0) {
      int swapIndex = n - 1;
      while (nums[swapIndex] <= nums[pivotIndex]) {
        swapIndex--;
      }
      swap(nums[pivotIndex], nums[swapIndex]);
    }

    reverse(nums.begin() + pivotIndex + 1, nums.end());
  }
};

int main() {
  Solution sol;

  vector<int> nums = {1, 2, 3};

  cout << "Original array: ";
  for (int num : nums)
    cout << num << " ";
  cout << endl;

  sol.nextPermutation(nums);

  cout << "Next permutation: ";
  for (int num : nums)
    cout << num << " ";
  cout << endl;

  return 0;
}
