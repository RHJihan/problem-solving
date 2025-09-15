#include <algorithm>
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

    int zeros = (int)count(s.begin(), s.end(), '0');
    int ones = 0;

    for (int i = 0; i < zeros; ++i) {
      if (s[i] == '1') {
        ones++;
      }
    }

    cout << ones << endl;
  }

  return 0;
}
