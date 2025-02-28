// https://codeforces.com/contest/749/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n / 2 << endl;
    for (int i = 0; i < n / 2; i++) {
      cout << "2 ";
    }
  } else {
    cout << n / 2 << endl;
    for (int i = 0; i < (n / 2) - 1; i++) {
      cout << "2 ";
    }
    cout << "3";
  }

  return 0;
}
