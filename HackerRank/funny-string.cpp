// https://www.hackerrank.com/challenges/funny-string/problem

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    string s;
    cin >> s;
    bool funny = true;

    int n = (int)s.size();
    for (int i = 1; i < n; i++) {

      if (abs(s[i] - s[i - 1]) != abs(s[n - i] - s[n - i - 1])) {
        funny = false;
        break;
      }
    }
    cout << (funny ? "Funny" : "Not Funny") << '\n';
  }
  return 0;
}