// https://www.hackerrank.com/challenges/repeated-string/problem

#include <iostream>
using namespace std;

int main() {
  string s;
  long n;
  cin >> s >> n;
  long no_of_a = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == 'a') {
      no_of_a++;
    }
  }
  no_of_a = (n / (int)s.size()) * no_of_a;

  int mod = n % (int)s.size();

  for (int i = 0; i < mod; i++) {
    if (s[i] == 'a') {
      no_of_a++;
    }
  }

  cout << no_of_a << '\n';

  return 0;
}