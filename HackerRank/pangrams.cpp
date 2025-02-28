// https://www.hackerrank.com/challenges/pangrams/problem

#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int letters[26] = {0};
  for (int i = 0; i < (int)s.size(); i++) {
    if (isalpha(s[i])) {
      letters[tolower(s[i]) - 'a'] = 1;
    }
  }

  bool pan = true;

  for (int i = 0; i < 26; i++) {
    if (letters[i] == 0) {
      pan = false;
      break;
    }
  }

  cout << (pan ? "pangram" : "not pangram") << '\n';

  return 0;
}