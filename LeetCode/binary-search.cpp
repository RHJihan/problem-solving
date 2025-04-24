#include <iostream>
#include <vector>
using namespace std;

int binary_search(const vector<int> &nums, int target, int left, int right) {
  if (left > right)
    return -1;

  int mid = left + (right - left) / 2;

  if (nums[mid] == target)
    return mid;
  else if (nums[mid] > target)
    return binary_search(nums, target, left, mid - 1);
  else
    return binary_search(nums, target, mid + 1, right);
}

int search(vector<int> &nums, int target) {
  return binary_search(nums, target, 0, nums.size() - 1);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int find;
  cin >> find;

  int index = search(arr, find);
  cout << "found at index: " << index << endl;

  return 0;
}
