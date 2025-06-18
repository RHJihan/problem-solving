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

    bool found = false;

    for (int i = 1; i < n - 1; i++) {
      string a = s.substr(0, i);
      char b = s[i];
      string c = s.substr(i + 1);

      string ac = a + c;

      if (ac.find(b) != string::npos) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
