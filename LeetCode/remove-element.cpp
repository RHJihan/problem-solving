#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val) {
  int i = 0;

  for (int j = 0; j < (int)nums.size(); j++) {
    if (nums[j] != val) {
      nums[i] = nums[j];
      i++;
    }
  }

  return i;
}

int main() {
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;

  int k = removeElement(nums, val);

  cout << k << endl;
  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}
