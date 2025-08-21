#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  string largestNumber(vector<int> &nums) {
    vector<string> arr;
    for (int num : nums) {
      arr.push_back(to_string(num));
    }

    sort(arr.begin(), arr.end(), [](string &a, string &b) {
      return a + b > b + a;
    });

    if (arr[0] == "0") {
      return "0";
    }

    string result = "";
    for (string &s : arr) {
      result += s;
    }

    return result;
  }
};

int main() {
  Solution sol;

  vector<int> nums1 = {10, 2};
  cout << sol.largestNumber(nums1) << endl;

  return 0;
}
