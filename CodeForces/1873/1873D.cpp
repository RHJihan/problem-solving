// https://codeforces.com/contest/1873/problem/D
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int count = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        count++;
        i += k - 1;
      }
    }

    cout << count << endl;
  }

  return 0;
}
