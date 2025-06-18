#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> divideArray(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());

  vector<vector<int>> result;
  int n = (int)nums.size();

  for (int i = 0; i < n; i += 3) {
    int a = nums[i];
    int b = nums[i + 1];
    int c = nums[i + 2];

    if (c - a > k) {
      return {};
    }

    result.push_back({a, b, c});
  }

  return result;
}

int main() {
  vector<int> nums = {1, 3, 4, 8, 7, 9, 3, 5, 1};
  int k = 2;

  vector<vector<int>> result = divideArray(nums, k);

  if (result.empty()) {
    cout << "[]" << endl;
  } else {
    cout << "[";
    for (int i = 0; i < (int)result.size(); i++) {
      cout << "[";
      for (int j = 0; j < 3; j++) {
        cout << result[i][j];
        if (j != 2)
          cout << ",";
      }
      cout << "]";
      if (i != (int)result.size() - 1)
        cout << ",";
    }
    cout << "]" << endl;
  }

  return 0;
}
