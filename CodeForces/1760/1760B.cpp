// https://codeforces.com/contest/1760/problem/B
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    char max_letter = 'a';

    for (int i = 0; i < s.length(); i++) {
      if (s[i] > max_letter) {
        max_letter = s[i];
      }
    }

    cout << max_letter - 'a' + 1 << endl;
  }

  return 0;
}