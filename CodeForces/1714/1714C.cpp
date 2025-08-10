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
    int s;
    cin >> s;

    vector<int> digits;

    for (int d = 9; d >= 1; d--) {
      if (s >= d) {
        digits.push_back(d);
        s -= d;
      }
    }

    reverse(digits.begin(), digits.end());

    for (int d : digits) {
      cout << d;
    }
    cout << endl;
  }

  return 0;
}
