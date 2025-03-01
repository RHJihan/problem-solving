// https://codeforces.com/contest/2009/problem/A

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    int min_value = b;

    for (int c = a; c <= b; ++c) {
      int result = (c - a) + (b - c);
      if (result < min_value) {
        min_value = result;
      }
    }
    cout << min_value << '\n';
  }
  return 0;
}