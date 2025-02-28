// https://www.hackerrank.com/challenges/the-hurdle-race/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, jump, max = 0, wall;
  cin >> n >> jump;
  for (int i = 0; i < n; i++) {
    cin >> wall;
    if (wall > max) {
      max = wall;
    }
  }

  cout << ((max - jump <= 0) ? 0 : max - jump) << endl;

  return 0;
}