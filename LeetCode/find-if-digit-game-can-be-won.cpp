#include <iostream>
#include <vector>
using namespace std;

bool canAliceWin(vector<int> &nums) {
  int single_sum = 0;
  int double_sum = 0;
  int total_sum = 0;

  for (int i = 0; i < (int)nums.size(); i++) {
    int num = nums[i];
    total_sum += num;

    if (num >= 1 && num <= 9) {
      single_sum += num;
    } else {
      double_sum += num;
    }
  }

  bool single_win = single_sum > (total_sum - single_sum);
  bool double_win = double_sum > (total_sum - double_sum);

  return single_win || double_win;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 10};
  cout << canAliceWin(nums) << endl;

  return 0;
}