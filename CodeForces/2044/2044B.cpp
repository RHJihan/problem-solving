// https://codeforces.com/contest/2044/problem/B

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int size = (int)s.size();
    char result[size];

    for (int i = size - 1, j = 0; i >= 0; i--, j++) {
      if (s[i] == 'p') {
        result[j] = 'q';
      } else if (s[i] == 'q') {
        result[j] = 'p';
      } else {
        result[j] = s[i];
      }
    }


      cout << result << '\n';
  }
  return 0;
}