#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int n = (int)numbers.size();
    int left = 0, right = n - 1;
    int sum = 0;

    while (left < right) {
      sum = numbers[left] + numbers[right];

      if (sum > target) {
        right--;
      } else if (sum < target) {
        left++;
      } else {
        return {left + 1, right + 1};
      }
    }
    return {-1, -1};
  }
};

int main() {
  Solution sol;

  vector<int> nums = {2, 7, 11, 15};
  vector<int> result = sol.twoSum(nums, 9);
  
  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}