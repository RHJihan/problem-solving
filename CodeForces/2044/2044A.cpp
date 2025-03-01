// https://codeforces.com/contest/2044/problem/A

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (i + j == n) {
          count++;
        }
      }
    }
    cout << count << '\n';
  }

  return 0;
}