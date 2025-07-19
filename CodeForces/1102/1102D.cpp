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
  string s;
  cin >> s;

  vector<int> count(3);

  for (char c : s) {
    count[c - '0']++;
  }

  int target = n / 3;

  for (int i = 0; i < n; ++i) {
    int digit = s[i] - '0';
    if (count[digit] > target) {
      if (count[0] < target && digit > 0) {
        count[digit]--;
        s[i] = '0';
        count[0]++;
      } else if (count[1] < target && digit == 2) {
        count[2]--;
        s[i] = '1';
        count[1]++;
      }
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    int digit = s[i] - '0';
    if (count[digit] > target) {
      if (count[2] < target && digit < 2) {
        count[digit]--;
        s[i] = '2';
        count[2]++;
      } else if (count[1] < target && digit == 0) {
        count[0]--;
        s[i] = '1';
        count[1]++;
      }
    }
  }

  cout << s << endl;
  return 0;
}
