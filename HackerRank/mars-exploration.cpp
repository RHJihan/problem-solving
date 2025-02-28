// https://www.hackerrank.com/challenges/mars-exploration/problem

#include <iostream>
using namespace std;

int main() {
  string s;
  int count = 0;

  cin >> s;

  for (int i = 0; i < (int)s.size(); i += 3) {
    if (s[i] != 'S') {
      count++;
    }
    if (s[i + 1] != 'O') {
      count++;
    }
    if (s[i + 2] != 'S') {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}