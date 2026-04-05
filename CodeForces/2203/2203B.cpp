#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {

    string s;
    cin >> s;

    int n = (int)s.length();
    long long sum = 0;

    vector<int> nums;

    for (int i = 0; i < n; i++) {

      int digit = s[i] - '0';
      sum = sum + digit;

      if (i == 0) {
        if (digit - 1 > 0) {
          nums.push_back(digit - 1);
        } else {
          nums.push_back(0);
        }
      } else {
        nums.push_back(digit);
      }
    }

    if (sum <= 9) {
      cout << 0 << endl;
    } else {

      sort(nums.begin(), nums.end());
      reverse(nums.begin(), nums.end());

      long long need = sum - 9;
      int count = 0;

      for (int i = 0; i < (int)nums.size(); i++) {
        need = need - nums[i];
        count = count + 1;

        if (need <= 0) {
          cout << count << endl;
          break;
        }
      }
    }
  }

  return 0;
}