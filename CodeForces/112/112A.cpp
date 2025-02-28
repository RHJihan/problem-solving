// https://codeforces.com/contest/112/problem/A
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int size = a.size();
  for (int i = 0; i < size; i++) {
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }

  if (a < b) {
    cout << -1 << '\n';
  } else if (a > b) {
    cout << 1 << '\n';
  } else {
    cout << 0 << '\n';
  }

  return 0;
}
