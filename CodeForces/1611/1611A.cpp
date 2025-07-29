#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s = to_string(n);

    int first = s[0] - '0';
    int last = s[s.size() - 1] - '0';

    if (last % 2 == 0) {
      cout << 0 << endl;
    } else if (first % 2 == 0) {
      cout << 1 << endl;
    } else {
      bool found_even = false;
      for (char c : s) {
        if ((c - '0') % 2 == 0) {
          found_even = true;
          break;
        }
      }
      if (found_even) {
        cout << 2 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }

  return 0;
}
