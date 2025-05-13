#include <iostream>
#include <vector>
using namespace std;

void generate(int index, vector<int> &nums, vector<vector<int>> &result) {
  if (index == (int)nums.size()) {
    result.push_back(nums);
    return;
  }

  for (int i = index; i < (int)nums.size(); i++) {
    swap(nums[index], nums[i]);
    generate(index + 1, nums, result);
    swap(nums[index], nums[i]);
  }
}

vector<vector<int>> permute(vector<int> &nums) {
  vector<vector<int>> result;
  generate(0, nums, result);
  return result;
}

int main() {

  vector<int> nums = {1, 2, 3};

  vector<vector<int>> permutations = permute(nums);

  for (auto entry : permutations) {
    cout << "[ ";
    for (int num : entry) {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
