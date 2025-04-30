#include <iostream>
#include <map>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums) {
  map<int, int> freq;

  for (int i = 0; i < (int)nums.size(); i++) {
    freq[nums[i]]++;
  }

  for (auto it = freq.begin(); it != freq.end(); it++) {
    if (it->second == 1) {
      return it->first;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {4, 1, 2, 1, 2};
  cout << singleNumber(nums) << endl;
  return 0;
}
