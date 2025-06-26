#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k, i, op1 = 0, op2 = 0;
  string s;
  cin >> n >> k >> s;

  if (k == 2) {
    for (i = 0; i < n; i++) {
      if (s[i] - 'A' != i % 2)
        op1++;
      else
        op2++;
    }

    cout << min(op1, op2) << endl;

    if (op1 < op2) {
      for (i = 0; i < n; i++) {
        cout << char('A' + i % 2);
      }
    } else {
      for (i = 0; i < n; i++) {
        cout << char('A' + 1 - (i % 2));
      }
    }
  } else {
    for (i = 1; i < n; i++) {
      if (s[i] == s[i - 1]) {
        op1++;
        s[i] = 'A';
        while (s[i] == s[i - 1] || s[i] == s[i + 1]) {
          s[i]++;
        }
      }
    }
    cout << op1 << endl;
    cout << s << endl;
  }
  return 0;
}