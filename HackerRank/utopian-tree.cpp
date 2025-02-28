// https://www.hackerrank.com/challenges/utopian-tree/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int result[60];
  int cycle, height = 0;
  for (int i = 0; i <= 60; i++) {
    if (i % 2 == 0) {
      height++;
    } else {
      height += height;
    }
    result[i] = height;
  }

  while (n--) {
    cin >> cycle;
    cout << result[cycle] << endl;
  }

  return 0;
}