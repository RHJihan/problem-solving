#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> &nums) {
  bool increasing = true;
  bool decreasing = true;

  for (int i = 1; i < (int) nums.size(); i++) {
    if (nums[i] > nums[i - 1]) {
      decreasing = false;
    }
    if (nums[i] < nums[i - 1]) {
      increasing = false;
    }
  }

  return increasing || decreasing;
}

int main() {
  vector<int> nums = {6, 5, 4, 4};
  cout << isMonotonic(nums) << endl;
  return 0;
}
