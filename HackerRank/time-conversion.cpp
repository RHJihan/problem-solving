// https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int h;
  string m = s;

  if (s[8] == 'P') {
    h = (s[0] - '0') * 10 + 12;
    h += (s[1] - '0');
    if (h == 24)
      h = 12;

  } else {
    h = (s[0] - '0') * 10;
    h += (s[1] - '0');
    if (h == 12)
      h = 0;
  }

  cout << setw(2) << setfill('0');
  cout << h << ":" << s[3] << s[4] << ":" << s[6] << s[7] << endl;
  return 0;
}