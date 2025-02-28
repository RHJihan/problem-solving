// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int test, catA, catB, mouse;
  cin >> test;
  while (test--) {
    cin >> catA >> catB >> mouse;
    if (abs(mouse - catA) > abs(mouse - catB)) {
      cout << "Cat B" << endl;
    } else if (abs(mouse - catA) < abs(mouse - catB)) {
      cout << "Cat A" << endl;
    } else {
      cout << "Mouse C" << endl;
    }
  }
  return 0;
}