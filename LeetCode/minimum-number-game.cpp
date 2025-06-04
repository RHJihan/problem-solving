#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> numberGame(vector<int> &nums) {
  sort(nums.begin(), nums.end());

  vector<int> arr;

  for (int i = 0; i < (int)nums.size(); i += 2) {
    arr.push_back(nums[i + 1]);
    arr.push_back(nums[i]);
  }

  return arr;
}

int main() {
  vector<int> nums = {5, 4, 2, 3};
  vector<int> result = numberGame(nums);
  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}