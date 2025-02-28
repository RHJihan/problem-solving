// https://www.hackerrank.com/challenges/two-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
  int p;
  cin >> p;

  for (int t = 0; t < p; ++t) {
    string s1, s2;
    cin >> s1 >> s2;

    // map

    bool characters[26] = {false};
    for (int i = 0; i < (int)s1.size(); i++) {
      characters[s1[i] - 'a'] = true;
    }

    bool found = false;
    for (int i = 0; i < (int)s2.size(); i++) {
      if (characters[s2[i] - 'a']) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
