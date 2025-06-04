#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int> &nums, int k) {
  double current = 0;
  for (int i = 0; i < k; i++) {
    current += nums[i];
  }

  double max_sum = current;

  for (int i = k; i < (int)nums.size(); i++) {
    current = current - nums[i - k] + nums[i];
    if (current > max_sum) {
      max_sum = current;
    }
  }

  return max_sum / k;
}

int main() {
  vector<int> nums = {1, 12, -5, -6, 50, 3};

  cout << findMaxAverage(nums, 4) << endl;

  return 0;
}