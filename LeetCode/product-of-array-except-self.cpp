#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
  int n = (int)nums.size();
  vector<int> answer(n, 1);

  int prefix = 1;
  for (int i = 0; i < n; i++) {
    answer[i] = prefix;
    prefix *= nums[i];
  }

  int suffix = 1;
  for (int i = n - 1; i >= 0; i--) {
    answer[i] *= suffix;
    suffix *= nums[i];
  }

  return answer;
}

int main() {

  vector<int> nums1 = {1, 2, 3, 4};
  vector<int> result = productExceptSelf(nums1);

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }

  cout << endl;

  return 0;
}
