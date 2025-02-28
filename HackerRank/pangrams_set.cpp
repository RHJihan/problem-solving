// https://www.hackerrank.com/challenges/pangrams/problem

#include <iostream>
#include <set>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  set<char> letters;

  for (char c : s) {
    if (isalpha(c)) {
      letters.insert(tolower(c));
    }
  }

  if (letters.size() == 26) {
    cout << "pangram" << endl;
  } else {
    cout << "not pangram" << endl;
  }

  return 0;
}