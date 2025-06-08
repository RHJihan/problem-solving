#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  cout << (((nums[n - 1] - nums[1]) < (nums[n - 2] - nums[0])) ? (nums[n - 1] - nums[1]) : (nums[n - 2] - nums[0])) << endl;

  return 0;
}