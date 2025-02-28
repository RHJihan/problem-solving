#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    char a;
    cin >> a;
    string s = "codeforces";
    bool found = false;
    for (int i = 0; i < 10; i++) {
      if (s[i] == a) {
        found = true;
        break;
      }
    }
    cout << (found ? "YES" : "NO") << endl;
  }

  return 0;
}