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
    cin >> n;
    string s;
    cin >> s;

    int pending = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'Q') {
        pending++;
      } else if (s[i] == 'A') {
        if (pending > 0) {
          pending--;
        }
      }
    }

    if (pending == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
