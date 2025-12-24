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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int count = 0;
    int idx = -1;

    for (int i = 0; i < n; i++) {
      if (s[i] != '1') {
        if (i > idx) {
          count++;
        }
      } else {
        idx = i + k;
      }
    }

    cout << count << endl;
  }

  return 0;
}