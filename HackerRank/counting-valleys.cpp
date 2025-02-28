// https://www.hackerrank.com/challenges/counting-valleys/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int level = 0, valley, count = 0;

  for (int i = 0; i < n; i++) {
    int previous_level = level;
    level += (s[i] == 'U') ? 1 : -1;
    count += (previous_level == 0 && level == -1);
  }
  cout << count << '\n';

  return 0;
}