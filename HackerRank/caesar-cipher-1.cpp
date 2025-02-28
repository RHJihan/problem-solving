// https://www.hackerrank.com/challenges/caesar-cipher-1/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int shift;
  cin >> shift;

  string ceaser = s;
  for (int i = 0; i < (int)s.size(); i++) {
    if (isalpha(s[i])) {
      if (islower(s[i]))
        ceaser[i] = 'a' + (s[i] - 'a' + shift) % 26;

      if (!islower(s[i]))
        ceaser[i] = 'A' + (s[i] - 'A' + shift) % 26;
    }
  }

  cout << ceaser;

  return 0;
}