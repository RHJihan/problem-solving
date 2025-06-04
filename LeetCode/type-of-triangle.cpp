#include <iostream>
#include <vector>
using namespace std;

string triangleType(vector<int> &nums) {
  int a = nums[0], b = nums[1], c = nums[2];

  if (a + b <= c || a + c <= b || b + c <= a) {
    return "none";
  }

  if (a == b && b == c) {
    return "equilateral";
  } else if (a == b || b == c || a == c) {
    return "isosceles";
  } else {
    return "scalene";
  }
}

int main() {
  vector<int> nums = {3, 3, 3};
  cout << triangleType(nums) << endl;

  return 0;
}