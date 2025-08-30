#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int hIndex(vector<int> &citations) {
    int n = citations.size();
    vector<int> freq(n + 1);

    for (int num : citations) {
      if (num >= n) {
        freq[n]++;
      } else {
        freq[num]++;
      }
    }

    int idx = n;
    int sum = freq[n];

    while (sum < idx) {
      idx--;
      sum += freq[idx];
    }
    return idx;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {3, 0, 6, 1, 5};
  cout << sol.hIndex(nums) << endl;

  return 0;
}