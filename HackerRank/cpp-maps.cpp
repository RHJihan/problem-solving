// https://www.hackerrank.com/challenges/cpp-maps/problem
#include <iostream>
#include <map>
using namespace std;

int main() {
  int t;
  cin >> t;
  int q, mark;
  string s;
  map<string, int> stud;

  for (int i = 0; i < t; i++) {
    cin >> q >> s;
    if (q == 1) {
      cin >> mark;
      stud[s] += mark;
    } else if (q == 2) {
      stud[s] = 0;
    } else if (q == 3) {
      cout << stud[s] << '\n';
    }
  }

  return 0;
}