#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    bool alice = false;

    for (int i = 1; i < n; i++) {
      if (s[i - 1] == '1' && s[i] == '1') {
        alice = true;
      }
    }

    if (s[0] == '1' || s[n - 1] == '1') {
      alice = true;
    }

    if (alice) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
