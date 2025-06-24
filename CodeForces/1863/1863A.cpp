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
    int n, a, q;
    cin >> n >> a >> q;

    string s;
    cin >> s;

    int max_readers = a;
    bool all_read = false;

    if (a == n) {
      cout << "YES" << endl;
      continue;
    }

    for (int i = 0; i < q; i++) {
      char event = s[i];

      if (event == '+') {
        a++;
        max_readers++;
      } else if (event == '-') {
        a--;
      }

      if (a == n) {
        all_read = true;
        break;
      }
    }

    if (all_read) {
      cout << "YES" << endl;
    } else if (max_readers >= n) {
      cout << "MAYBE" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
