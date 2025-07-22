#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool difficult(string &s) {
  for (int i = 0; i + 2 < (int)s.size(); i++) {
    if ((s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T') ||
        (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T')) {
      return true;
    }
  }
  return false;
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

    sort(s.begin(), s.end());

    if (difficult(s)) {
      reverse(s.begin(), s.end());
    }

    cout << s << endl;
  }

  return 0;
}
