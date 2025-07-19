#include <iostream>
#include <set>
using namespace std;

set<char> get_digit(int num) {
  set<char> st;
  string s = to_string(num);
  for (int i = 0; i < (int)s.size(); i++) {
    st.insert(s[i]);
  }
  return st;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;
    set<char> x_digit = get_digit(x);
    int y = 0;

    while (true) {
      set<char> y_digit = get_digit(y);
      bool found = false;

      for (char d : y_digit) {
        if (x_digit.count(d)) {
          found = true;
          break;
        }
      }
      if (found) {
        cout << y << endl;
        break;
      }
      y++;
    }
  }

  return 0;
}
