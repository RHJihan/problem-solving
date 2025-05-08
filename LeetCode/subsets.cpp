#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums) {
  vector<vector<int>> result = {{}};

  for (int i = 0; i < (int)nums.size(); i++) {
    int n = (int)result.size();
    for (int j = 0; j < n; j++) {
      vector<int> new_subset = result[j];
      new_subset.push_back(nums[i]);
      result.push_back(new_subset);
    }
  }

  return result;
}

int main() {
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> result = subsets(nums);

  for (int i = 0; i < (int)result.size(); i++) {
    for (int j = 0; j < (int)result[i].size(); j++) {
      cout << result[i][j];
      if (j < (int)result[i].size() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
