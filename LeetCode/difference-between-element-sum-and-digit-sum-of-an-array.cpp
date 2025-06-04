#include <iostream>
#include <vector>
using namespace std;

int digit_sum(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int differenceOfSum(vector<int> &nums) {
  int element_sum = 0;
  int total_sum = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    element_sum += nums[i];
    total_sum += digit_sum(nums[i]);
  }

  return abs(element_sum - total_sum);
}

int main() {
  vector<int> nums = {1, 15, 6, 3};
  cout << differenceOfSum(nums) << endl;

  return 0;
}