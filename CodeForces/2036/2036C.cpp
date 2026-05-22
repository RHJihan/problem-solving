#include <iostream>
#include <set>
using namespace std;

bool check(string &s, int i) {
  if (i < 0 || i + 3 >= s.size())
    return false;

  return (s[i] == '1' &&
          s[i + 1] == '1' &&
          s[i + 2] == '0' &&
          s[i + 3] == '0');
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int q;
    cin >> q;

    set<int> pos;

    for (int i = 0; i + 3 < s.size(); i++) {
      if (check(s, i)) {
        pos.insert(i);
      }
    }

    while (q--) {
      int index;
      char value;

      cin >> index >> value;
      index--;

      for (int i = index - 3; i <= index; i++) {
        if (check(s, i)) {
          pos.erase(i);
        }
      }

      s[index] = value;

      for (int i = index - 3; i <= index; i++) {
        if (check(s, i)) {
          pos.insert(i);
        }
      }

      if (!pos.empty()) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
