// https://www.hackerrank.com/challenges/kangaroo/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  int pos1 = x1, pos2 = x2;
  if (x1 == x2) {
    cout << "YES";
  } else if (x1 > x2 && v1 >= v2 || x2 > x1 && v2 >= v1) {
    cout << "NO";
  } else {
    for (int i = 1; i < INT_MAX; i++) {

      pos1 += v1;
      pos2 += v2;

      if (pos1 == pos2) {
        cout << "YES";
        break;
      }
    }
  }

  return 0;
}