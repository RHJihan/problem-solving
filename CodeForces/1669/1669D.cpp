// https://codeforces.com/contest/1669/problem/D
#include <iostream>
#include <vector>
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
    string s;
    cin >> n >> s;

    int i = 0;
    bool possible = true;
    while (i < n) {
      if (s[i] == 'W') {
        i++;
        continue;
      }

      int j = i;
      bool hasR = false, hasB = false;
      while (j < n && s[j] != 'W') {
        if (s[j] == 'R')
          hasR = true;
        if (s[j] == 'B')
          hasB = true;
        j++;
      }

      if (!hasR || !hasB) {
        possible = false;
        break;
      }

      i = j;
    }

    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}}