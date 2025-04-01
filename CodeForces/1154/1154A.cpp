#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  vector<int> nums(4);
  for (int i = 0; i < 4; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  cout << nums[3] - nums[2] << " " << nums[3] - nums[1] << " " << nums[3] - nums[0] << endl;

  return 0;
}