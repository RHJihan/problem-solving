// https://codeforces.com/contest/1703/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}