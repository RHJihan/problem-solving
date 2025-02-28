// https://codeforces.com/contest/1703/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> digit(n);
    for (int i = 0; i < n; i++) {
      cin >> digit[i];
    }
    for (int i = 0; i < n; i++) {
      int m;
      cin >> m;
      string s;
      cin >> s;

      for (int j = 0; j < m; j++) {
        if (s[j] == 'U') {
          digit[i] = (digit[i] - 1 + 10) % 10;
        } else if (s[j] == 'D') {
          digit[i] = (digit[i] + 1) % 10;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      cout << digit[i] << " ";
    }
    cout << endl;
  }

  return 0;
}