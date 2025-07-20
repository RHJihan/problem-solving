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

    int count = 0;

    for (int i = 0; i < n; i++) {
      count += s[i] - '0';
      if (i != n - 1 && s[i] != '0') {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
